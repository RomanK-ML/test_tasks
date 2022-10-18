#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "interauraltimedifference.h"
#include <QDebug>

#include "string"
#include "stdio.h"

InterauralTimeDifference itd = InterauralTimeDifference();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Фиксируем размер окна
    this->setFixedSize(330,400);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createSoundButton_clicked()
{

   float speedSound = ui->speedSoundSpinBox->value();
   float distanceEars = ui->distanceEarsSpinBox->value();
   float angleSource = ui->startAngleSourceSpinBox->value();
   float distanceSource = ui->dustanceSourceSpinBox->value();
   float speedRotation = ui->speedRotationSourceSpinBox->value();
   float soundTimeDuration = ui->soundTimeDurationSpinBox->value();

   itd.init(speedSound, distanceEars, angleSource, distanceSource, speedRotation, soundTimeDuration);
   itd.createSound();
   itd.saveFile();

   ui->listenSoundButton->setEnabled(true);
}


void MainWindow::on_listenSoundButton_clicked()
{
    itd.listenFile();
}

