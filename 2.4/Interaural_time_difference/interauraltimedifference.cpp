#include "interauraltimedifference.h"
#include <QDebug>
#include <exception>


InterauralTimeDifference::InterauralTimeDifference()
{

}

void InterauralTimeDifference::init(float _speedSound, float _distanceEars, float _angleSource, float _distanceSource, float _speedRotation, float _soundTimeDuration){
    this->speedSound = _speedSound;
    this->distanceEars = _distanceEars / 100;
    this->angleSource = _angleSource;
    this->distanceSource = _distanceSource;
    this->speedRotation = _speedRotation;
    this->soundTimeDuration = _soundTimeDuration;

    this->rightSamples.clear();
    this->leftSamples.clear();
    this->soundSource.clear();


    generateSoundSource();
}

//Генерируем случайный звук
void InterauralTimeDifference::generateSoundSource()
{
    //Рандомазер
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::uniform_real_distribution<> dist(-1, 1);

    for (int samplSource = 0; samplSource < this->sampleRate * this->soundTimeDuration; samplSource++)
    {
        this->soundSource.push_back(dist(gen));
    }
}

//Высчитываем задержку и заполняем 2 канала данными
void InterauralTimeDifference::createSound()
{
    //Задаем начальный размер и заполняем все 0.
    this->rightSamples.resize(this->soundSource.size(), 0);
    this->leftSamples.resize(this->soundSource.size(), 0);

    float angleForStep = this->speedRotation / this->sampleRate;    //Угол на который поворачивается источник после каждого шага.
    float distanceEar = this->distanceEars / 2;                     //Расстояние от центра до уха.
    float timeOfStep = 60.0 / this->sampleRate;                     //Время на один шаг.

    for(int i = 0; i < this->soundSource.size(); i++){

        float angle;
        float itdAngle = fmodf(this->angleSource, 180);


        if(this->angleSource >= 0 && this->angleSource <= 180){
            //Определяем нужный нам угол.
            if(this->angleSource > 90){
                angle = fmodf(this->angleSource, 90);
            }
            else{
                angle = 90 - this->angleSource;
            }

            //Определем дистанцию от правого уха до источника
            float rightDistance = std::sqrt(std::pow(this->distanceSource, 2) + std::pow(distanceEar, 2) - 2 * this->distanceSource * distanceEar * std::cos(angle * M_PI / 180));
            //Определяем задержку от источника до правого уха.
            float rightItdTime = rightDistance / this->speedSound;
            //По задержке определяем количество шагов на которые нужно отступить.
            int itdRightOffset = std::ceil(rightItdTime / timeOfStep);

            //Определяем задержку от прового уха до левого.
            float leftItdTime  = 3 * distanceEar * (sin(itdAngle * M_PI / 180) / this->speedSound);

            //По задержке определяем количество шагов на которые нужно отступить.
            int itdLeftOffset = std::ceil(leftItdTime / timeOfStep);

            //Если размер deque меньше размера отступа добавляем елементы.
            if(this->rightSamples.size() <= i + itdRightOffset + itdLeftOffset){
                while(this->rightSamples.size() <= i + itdRightOffset + itdLeftOffset){
                    this->rightSamples.push_back(0);
                    this->leftSamples.push_back(0);
                }
            }
            //Записываем данные с источника по расчитанному отступу.
            this->rightSamples[i + itdRightOffset] += this->soundSource[i];
            this->leftSamples[i + itdRightOffset + itdLeftOffset] += this->soundSource[i];
        }
        else{
            //Определяем нужный нам угол.
            if(this->angleSource > 270){
                angle = fmodf(this->angleSource, 90);
            }
            else{
                angle = 90 - fmodf(this->angleSource, 90);
            }

            //Определем дистанцию от левого уха до источника
            float leftDistance = std::sqrt(std::pow(this->distanceSource, 2) + std::pow(distanceEar, 2) - 2 * this->distanceSource * distanceEar * std::cos(angle * M_PI / 180));
            //Определяем задержку от источника до левого уха.
            float leftItdTime = leftDistance / this->speedSound;
            //По задержке определяем количество шагов на которые нужно отступить.
            int itdLeftOffset = std::ceil(leftItdTime / timeOfStep);

            //Определяем задержку от левого уха до правого.
            float rightItdTime  = 3 * distanceEar * (sin(itdAngle * M_PI / 180) / this->speedSound);

            //По задержке определяем количество шагов на которые нужно отступить.
            int itdRightOffset = std::ceil(rightItdTime / timeOfStep);

            //Если размер deque меньше размера отступа добавляем елементы.
            if(this->rightSamples.size() <= i + itdRightOffset + itdLeftOffset){
                while(this->rightSamples.size() <= i + itdRightOffset + itdLeftOffset){
                    this->rightSamples.push_back(0);
                    this->leftSamples.push_back(0);
                }
            }

            //Записываем данные с источника по расчитанному отступу.
            this->leftSamples[i + itdLeftOffset] += this->soundSource[i];
            this->rightSamples[i + itdRightOffset + itdLeftOffset] += this->soundSource[i];

        }

        this->angleSource = fmodf(this->angleSource + angleForStep, 360);




    }
}

//Сохраняем файл.
void InterauralTimeDifference::saveFile()
{
    //Создаем папку если ее нет для сохранения файла.
    std::string str = std::filesystem::current_path().string() + "\\sound";
    _mkdir(str.c_str());

    //Передаем параметры аудиофайла.
    this->audioFile.setNumChannels(2);
    this->audioFile.setSampleRate(this->sampleRate);
    this->audioFile.setNumSamplesPerChannel(this->rightSamples.size());

    //Заполняем данными по 2 каналам.
    for (int  i = 0; i < this->leftSamples.size(); i++)
    {
        this->audioFile.samples[0][i] = this->leftSamples[i];
        this->audioFile.samples[1][i] = this->rightSamples[i];
    }


    //Сохраняем файл по указанному пути в формате wav.
    this->audioFile.save(this->filePath, AudioFileFormat::Wave);
}

//Воспроизводим аудиофайл.
void InterauralTimeDifference::listenFile(){
#if defined _WIN32
    PlaySoundA((LPCSTR) filePath.c_str(), NULL, SND_FILENAME | SND_ASYNC);
#endif

}
