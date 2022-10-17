#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "stdio.h"
#include "random"
#include "linearcongruentialgenerator.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(350,450);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Генерирует 4 числа по случайным a, c, m.
void generateFourNumbers(int *numbers){
    //Рандомазер
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::uniform_real_distribution<> dist(200, 65535);
    int m = dist(gen);
    std::uniform_real_distribution<> dist2(500, m);
    int seed = dist2(gen);
    int a = dist2(gen);
    int c = dist2(gen);

    for (int i =  0; i < 4; i++) {
        seed = (a * seed + c) % m;
        numbers[i] = seed;
    }
}

//Обработчик события клика по кнопке "Сгенерировать случайные числа"
void MainWindow::on_generatedNumbersButton_clicked()
{
    //Генерирует 4 числа и назначает их значение соответствующим SpinBox-ам.
    int numbers[4];
    generateFourNumbers(numbers);
    ui->oneNumberSpinBox->setValue(numbers[0]);
    ui->twoNumberSpinBox->setValue(numbers[1]);
    ui->threeNumberSpinBox->setValue(numbers[2]);
    ui->fourNumberSpinBox->setValue(numbers[3]);
}

//Обработчик события клика по кнопке "Предсказать число"
void MainWindow::on_nextNumberButton_clicked()
{
    //Берет значение из SpinBox-ов и передает их.
    std::array<int, 4> values;
    values[0] = ui->oneNumberSpinBox->value();
    values[1] = ui->twoNumberSpinBox->value();
    values[2] = ui->threeNumberSpinBox->value();
    values[3] = ui->fourNumberSpinBox->value();
    //Создаем экземпляр класса LinearCongruentialGenerator
    LinearCongruentialGenerator lcg = LinearCongruentialGenerator(values);

    //Ищем коэффицентов a, c, m.
    lcg.searchNextNumber();

    //Выводим следующее чесло по найденным a, c, m.
    ui->nextNumberValueLabel->setText(QString::number(lcg.getNextNumber()));
}

