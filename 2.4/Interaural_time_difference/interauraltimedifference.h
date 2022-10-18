#ifndef INTERAURALTIMEDIFFERENCE_H
#define INTERAURALTIMEDIFFERENCE_H

#include <QtMath>
#include <cmath>
#include <filesystem>
#include <direct.h>

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
    float speedSound;           //Скорость звука в м/с
    float distanceEars;         //Расстояние между ушами в см
    float angleSource;          //Начальный угол
    float distanceSource;       //Расстояние до источника
    float speedRotation;        //Скорость поворота
    float soundTimeDuration;    //Продолжительность звука
    int sampleRate = 96000;     //Частота дискретизации

    std::deque<float> rightSamples;
    std::deque<float> leftSamples;
    std::deque<float> soundSource;
    AudioFile<float> audioFile;
    std::string filePath = "sound/itd-wav.wav";

    void generateSoundSource();

public:
    InterauralTimeDifference();

    void init(float _speedSound, float _distanceEars, float _startAngleSource, float _distanceSource, float _speedRotation, float _soundTimeDuration);

    void createSound();

    void saveFile();

    void listenFile();
};

#endif // INTERAURALTIMEDIFFERENCE_H
