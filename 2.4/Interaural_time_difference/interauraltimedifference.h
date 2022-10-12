#ifndef INTERAURALTIMEDIFFERENCE_H
#define INTERAURALTIMEDIFFERENCE_H

#include <QtMath>

#include "random"
#include "deque"
#include "AudioFile.h"

#if defined _WIN32
    #include <windows.h>
    #include "mmsystem.h"
    #include <iostream>
    #pragma comment(lib, "winmm.lib")

#endif

class InterauralTimeDifference {
private:
    float speedSound;		//Скорость звука в м/с
    float distanceEars;		//Расстояние между ушами в см
    float angleSource;		//Угол на котором находится источник звука
    float itdTime;

    float frequency = 2450;   //Частота сигнала в Гц
    int sampleRate = 44100;  //Частота дискретизации

    std::deque<float> rightSamples;
    std::deque<float> leftSamples;
    std::deque<float> soundSource;
    float countAddData;
    AudioFile<float> audioFile;
    std::string filePath = "sound/itd-wav.wav";

    void generateSoundSource();

public:
    InterauralTimeDifference();

    void init(float _speedSound, float _distanceEars, float _angleSource);

    void createSound();

    void saveFile();

    void listenFile();

};

#endif // INTERAURALTIMEDIFFERENCE_H
