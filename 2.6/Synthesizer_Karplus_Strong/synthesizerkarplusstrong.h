#ifndef SYNTHESIZERKARPLUSSTRONG_H
#define SYNTHESIZERKARPLUSSTRONG_H

#include <QObject>
#include <QWidget>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QSoundEffect>

#include <QApplication>
#include <QFile>
#include <QtMultimedia/QAudioFormat>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioDecoder>

#include "cmath"
#include "deque"
#include "random"
#include "AudioFile.h"
#include "string"

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
