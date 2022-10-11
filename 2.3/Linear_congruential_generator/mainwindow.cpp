#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "stdio.h"
#include "linearcongruentialgenerator.h"


LinearCongruentialGenerator lcg = LinearCongruentialGenerator(4);

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


void MainWindow::on_generateButton_clicked()
{
    ui->generatedNumbersList->clear();
    lcg.clearValues();
    lcg.generateValues();
    for(int i = 0; i < lcg.valuesCount; i++){
        QString str = QString::number(lcg.numbersGenerated[i]);
        ui->generatedNumbersList->addItem(str);
    }
    ui->searchButton->setEnabled(true);
    ui->visualLabel->text();
}


void MainWindow::on_nextButton_clicked()
{
    QString nextStr = QString::number(lcg.getNextNumber());
    ui->nextList->addItem(nextStr);
}


void MainWindow::on_searchButton_clicked()
{
    lcg.searchingNumbers(ui->visualLabel);
    ui->nextButton->setEnabled(true);
    ui->searchButton->setEnabled(false);
    ui->generateButton->setEnabled(false);
}


void MainWindow::on_clearButton_clicked()
{
    lcg.clearValues();
    ui->generatedNumbersList->clear();
    ui->nextList->clear();
    ui->searchButton->setEnabled(false);
    ui->nextButton->setEnabled(false);
    ui->generateButton->setEnabled(true);
}

