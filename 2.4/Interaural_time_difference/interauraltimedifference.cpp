#include "interauraltimedifference.h"


InterauralTimeDifference::InterauralTimeDifference()
{

}

void InterauralTimeDifference::init(float _speedSound, float _distanceEars, float _angleSource){
    this->speedSound = _speedSound;
    this->distanceEars = _distanceEars;
    this->angleSource = _angleSource * M_PI / 180;

    generateSoundSource();
}

//Генерируем случайный звук
void InterauralTimeDifference::generateSoundSource()
{
    if (soundSource.size() > 0)
    {
        soundSource.clear();
    }

    //Рандомазер
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::uniform_real_distribution<> dist(-1, 1);

    for (int samplSource = 0; samplSource < sampleRate; samplSource++)
    {
        soundSource.push_back(sin(dist(gen)));
    }
}

//Высчитываем задержку и заполняем 2 канала данными
void InterauralTimeDifference::createSound()
{   
    itdTime = 30 * (distanceEars / 2) * (sin(angleSource) / speedSound);

    countAddData = std::fabs(std::round(itdTime * sampleRate / 1000));
    leftSamples = soundSource;
    rightSamples = soundSource;

    for (int addSampl = 0; addSampl< countAddData; addSampl++)
    {
        leftSamples.push_front(0);
        rightSamples.push_back(0);
    }
}

//Сохраняем файл
void InterauralTimeDifference::saveFile()
{
    printf("\nSaveFile");

    audioFile.setNumChannels(2);
    audioFile.setSampleRate(sampleRate);
    audioFile.setNumSamplesPerChannel(sampleRate + countAddData);

    for (int  i = 0; i < leftSamples.size(); i++)
    {
        audioFile.samples[0][i] = leftSamples[i];
        audioFile.samples[1][i] = rightSamples[i];
    }


    audioFile.save(filePath, AudioFileFormat::Wave);
    printf("\nsave is complete");
}

void InterauralTimeDifference::listenFile(){

}
