#include "linearcongruentialgenerator.h"

LinearCongruentialGenerator::LinearCongruentialGenerator(int _valuesCount){
    this->valuesCount = _valuesCount;

    generateValues();
}

//Генерирует набор чисел значение после которых будем предсказывать.
void LinearCongruentialGenerator::generateValues(){

    //Рандомазер
    std::random_device rnd;
    std::mt19937 gen(rnd());
    std::uniform_real_distribution<> dist(5, 2000);
    int offset = dist(gen);

    //Проходим случайное количество раз через генератор.
    for(int i = 0; i < offset; i++){
        generatedNumber();
    }

    //Записываем следующий набор чисел в массив.
    if(this->numbersGenerated.size() == 0){
        for(int i = 0; i < this->valuesCount; i++){
            this->numbersGenerated.push_back(generatedNumber());
        }

    }
    this->m_seed = 1;       //Сбрасываем m_seed чтобы генерация пошла с начала.
}

//Очищает все значения
void LinearCongruentialGenerator::clearValues(){

    if(this->numbersGenerated.size() > 0){
        this->numbersGenerated.clear();
    }
    this->isSearch = false;
    this->m_seed = 1;
}

//Перебирает значения генератора пока последние 4 числа не будут равны числам в нашем массиве.
void LinearCongruentialGenerator::searchingNumbers(QLabel* _label){

    if(this->numbersGenerated.size() > 0){
        int cur = 0;
        while(cur < this->valuesCount){
            int gen = generatedNumber();
            if(this->numbersGenerated[cur] == gen){
                    cur++;
            }
            else {
                cur = 0;
            }
            _label->setText(QString::number(gen));
        }
        this->isSearch =  true;
    }
}

//Возвращает следующее число из генератора.
unsigned long int LinearCongruentialGenerator::getNextNumber(){
    if(this->isSearch == true){
        return generatedNumber();
    }
    return 0;
}

//Собственно наш линейный конгруэнтный генератор.
unsigned long int LinearCongruentialGenerator::generatedNumber(){
    int a = 16807;
    unsigned int m = 65535;

    this->m_seed = this->m_seed * a % m;
    return this->m_seed;
}
