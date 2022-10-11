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
    ui->speedSoundLabel->text();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createSoundButton_clicked()
{

   float speedSound = ui->speedSoundSpinBox->value();
   float distanceEars = ui->distanceEarsSpinBox->value();
   float angleSource = ui->angleSourceSpinBox->value();

   itd.init(speedSound, distanceEars, angleSource);
   itd.createSound();
   itd.saveFile();

   //ui->listenSoundButton->setEnabled(true);
}


void MainWindow::on_listenSoundButton_clicked()
{

}

