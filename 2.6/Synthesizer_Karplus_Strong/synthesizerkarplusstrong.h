#ifndef SYNTHESIZERKARPLUSSTRONG_H
#define SYNTHESIZERKARPLUSSTRONG_H

#include "deque"
#include "random"
#include "AudioFile.h"

#if defined _WIN32
    #include <windows.h>
    #include "mmsystem.h"
    #include <iostream>
    #pragma comment(lib, "winmm.lib")

#endif

class SynthesizerKarplusStrong
{
public:
    SynthesizerKarplusStrong();

    void init(float _frequency, float _duration, int _sampleRate);

    void createSound();

    void saveFile();

    void listenFile();

private:

        float frequency;    //Частота сигнала в Гц
        float duration;     //Время сигнала в секундах
        int sampleRate;     //Частота дискретизации

        int noiseLength;    //Длина генерируемого начальноги сигнала
        int samplesLength;  //Длина всего звукового файла
        std::deque<float> samples;
        std::deque<float> noise;
        float maxSampl = 0;         //Максимальное значение по модулю

        AudioFile<float> audio_file;
        std::string filePath = "sound/sks-wav.wav";
};

#endif // SYNTHESIZERKARPLUSSTRONG_H
