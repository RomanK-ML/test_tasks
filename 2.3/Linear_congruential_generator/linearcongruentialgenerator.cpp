#include "linearcongruentialgenerator.h"

//Конструктор класса
LinearCongruentialGenerator::LinearCongruentialGenerator(std::array<int, 4> _valuesArray){
    //Задаем переменным класса начальное значение
    this->valuesArray = _valuesArray;
    this->aRes = 0;
    this->cRes = 0;
    this->mRes = 0;
    this->maxValue = 0;

    for(int i = 0; i < _valuesArray.size(); i++){
        if(_valuesArray[i] > this->maxValue){
            this->maxValue = _valuesArray[i];
        }
    }

}

//Запускает алгоритмы поиска коэффицентов a, c, m.
void LinearCongruentialGenerator::searchNextNumber(){
    algorithmEuclida();

    //Проверяет нашел ли первый алгоритм нужные коэффиценты
    if(this->aRes == 0 && this->cRes == 0 && this->mRes == 0){
        bruteForce();
    }
}

//Находим коэффиценты a,c,m с помощью брут-форса.
void LinearCongruentialGenerator::bruteForce(){
    this->isSearch = false;
    for (int m = this->maxValue + 1; m < 65535; m++)
    {
        for (int a = 0; a < m; a++)
        {
            int c = this->valuesArray[1] - ((this->valuesArray[0] * a) % m);
            if(c < 0){
                c += m;
            }

            int x1 = (a * this->valuesArray[0] + c) % m;
            int x2 = (a * this->valuesArray[1] + c) % m;
            int x3 = (a * this->valuesArray[2] + c) % m;

            if(this->valuesArray[1] == x1 && this->valuesArray[2] == x2 && this->valuesArray[3] == x3){
                this->aRes = a;
                this->cRes = c;
                this->mRes = m;
                this->isSearch = true;
                if(this->isDebug){
                    qDebug() << "a:" << a;
                    qDebug() << "c:" << c;
                    qDebug() << "m:" << m;
                }
                break;
            }
        }
        if(this->isSearch){
            break;
        }
    }
}
//Находим коэффиценты a,c,m используя перебор и расширенный алгоритм Евклида.
void LinearCongruentialGenerator::algorithmEuclida(){
    for (int m = this->maxValue + 1; m < 65535; ++m) {
        int diff0 = (this->valuesArray[1] - this->valuesArray[0]);  if (diff0 < 0) diff0 += m;
        int diff1 = (this->valuesArray[2] - this->valuesArray[1]);  if (diff1 < 0) diff1 += m;
        int diff2 = (this->valuesArray[3] - this->valuesArray[2]);  if (diff2 < 0) diff2 += m;

        //Находим модульную мультипликативную обратную.
        int inv_diff0 = modular_inverse(diff0, m);
        if (inv_diff0 < 0) continue;
        //Находим коэффицент a через модульную мультипликативную обратную.
        int a = (diff1 * inv_diff0) % m;
        int c;

        //Вычисляем x1, x2 по найденной a.
        int my_diff1 = (a * diff0) % m;
        int my_diff2 = (a * diff1) % m;

        //Проверяем совподает ли найденные значения x1, x2 с истинными.
        if (my_diff2 == diff2 && my_diff1 == diff1) {

            //Зная коэффиценты m и a находим с.
            c = this->valuesArray[1] - ((this->valuesArray[0] * a) % m);
            if(c < 0){
                c += m;
            }

            ////Вычисляем x1, x2, x3 по найденными коэффицентами a, c, m.
            int x1 = (a * this->valuesArray[0] + c) % m;
            int x2 = (a * this->valuesArray[1] + c) % m;
            int x3 = (a * this->valuesArray[2] + c) % m;

            //Проверяем на соответствие x1, x2, x3 с истинными значениями так же проверяем что бы a, c были больше 0 и меньше m.
            if(a > 0 && c > 0 && a < m && c < m && this->valuesArray[1] == x1 && this->valuesArray[2] == x2 && this->valuesArray[3] == x3){
                //Записываем найденные коэффиценты.
                this->aRes = a;
                this->cRes = c;
                this->mRes = m;
                if(this->isDebug){
                    qDebug() << "a:" << aRes;
                    qDebug() << "c:" << cRes;
                    qDebug() << "m:" << mRes;
                    qDebug() << "----------------------------------";
                }
                break;
            }
        }
    }
}

//Нахождение модульной мультипликативной обратной с помощью расширенного алгоритма Евклида.
int LinearCongruentialGenerator::modular_inverse(int a, int m){
    int t = 0;
    int nt = 1;
    int r = m;
    int nr = a % m;

    while (nr != 0) {
        int quotient = r / nr;
        int temp;

        temp = nt;
        nt = t - quotient * nt;
        t = temp;

        temp = nr;
        nr = r - quotient * nr;
        r = temp;
    }

    if (r > 1){
        return -1;
    }

    if (t < 0){
        t += m;
    }

    return t;
}

//Возвращаем следующее чесло по найденным a, c, m.
int LinearCongruentialGenerator::getNextNumber(){

    //Проверяем что бы найденные a, c, m были не раввны 0
    if(this->aRes == 0 && this->cRes == 0 && this->mRes == 0){
        return 0;
    }
    //Вычисляем и находим следующее число по найденным коэффицентам a, c, m
    int nextNumber = (this->aRes * this->valuesArray[3] + this->cRes) % this->mRes;
    if(this->isDebug){
        debugNumbers();
    }
    return nextNumber;
}

//Выводит 5 чисел по найденным коэффицентам a, c, m.
void LinearCongruentialGenerator::debugNumbers(){



    int seed = this->valuesArray[0];
    int a = this->aRes;
    int c = this->cRes;
    int m = this->mRes;
    int rnd1 = (seed * a + c) % m;
    int rnd2 = (rnd1 * a + c) % m;
    int rnd3 = (rnd2 * a + c) % m;
    int rnd4 = (rnd3 * a + c) % m;

    qDebug() << "Num0:" << seed;
    qDebug() << "Num1:" << rnd1;
    qDebug() << "Num2:" << rnd2;
    qDebug() << "Num3:" << rnd3;
    qDebug() << "Num4:" << rnd4;
    qDebug() << "----------------------------------";
}
