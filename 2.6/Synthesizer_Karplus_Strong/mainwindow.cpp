#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "synthesizerkarplusstrong.h"

SynthesizerKarplusStrong sks = SynthesizerKarplusStrong();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createSoundButton_clicked()
{
    float frequency = ui->frequencySpinBox->value();
    float duration = ui->durationSpinBox->value();
    int sampleRate = ui->sampleRateSpinBox->value();
    sks.init(frequency, duration, sampleRate);
    sks.createSound();
    sks.saveFile();
    ui->listenSoundButton->setEnabled(true);
}


void MainWindow::on_listenSoundButton_clicked()
{

    sks.listenFile();
}

