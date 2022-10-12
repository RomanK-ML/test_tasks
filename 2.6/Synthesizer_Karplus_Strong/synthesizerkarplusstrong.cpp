#include "synthesizerkarplusstrong.h"

SynthesizerKarplusStrong::SynthesizerKarplusStrong()
{

}

void SynthesizerKarplusStrong::init(float _frequency, float _duration, int _sampleRate){
    this->frequency = _frequency;
    this->duration = _duration;
    this->sampleRate = _sampleRate;

    this->noiseLength = this->sampleRate / this->frequency;
    this->samplesLength = this->sampleRate * this->duration;
}

void  SynthesizerKarplusStrong::createSound(){

    //Рандомазер
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::uniform_real_distribution<> dist(-1, 1);

    //Генерируем начальный сигнал
    for (int noiseIndex=0; noiseIndex <= noiseLength; noiseIndex++){

        noise.push_back(sin(dist(gen)));
    }


    for (int samplIndex = 0; samplIndex < samplesLength; samplIndex++){

        if (samplIndex <= noiseLength){
            //Записываем в массив наш начальный сигнал
            samples.push_back(noise[samplIndex]);
        }
        else{
            //Используя алгоритм Карплуса-Стронга генерируем и записываем весь остальной сигнал
            samples.push_back((0.998 * (samples[samplIndex - noiseLength] + samples[samplIndex - noiseLength - 1]) / 2));
        }
        if (std::abs(samples.back()) > maxSampl){
            //Выисляем максимальное значение по модулю в нашем сигнале
            maxSampl = std::abs(samples.back());
        }
    }
}

void SynthesizerKarplusStrong::saveFile(){

    //Заполняем параметры аудиофайла
    audio_file.setNumChannels(1);
    audio_file.setNumSamplesPerChannel(this->samplesLength);
    audio_file.setSampleRate(this->sampleRate);

    //Нормализуем и сохраняем эти данные
    for (int audioSampl = 0; audioSampl < samplesLength; audioSampl++){
        float normalize = samples[audioSampl] / maxSampl;
        int formatSampl = (int16_t)(normalize * 32767);
        audio_file.samples[0][audioSampl] = formatSampl;
    }
    //Записываем наши данные в файл
    audio_file.save(filePath, AudioFileFormat::Wave);
}

void SynthesizerKarplusStrong::listenFile(){
    #if defined _WIN32
        PlaySoundA((LPCSTR) filePath.c_str(), NULL, SND_FILENAME | SND_ASYNC);
    #endif



}
