#ifndef LINEARCONGRUENTIALGENERATOR_H
#define LINEARCONGRUENTIALGENERATOR_H

#include <QLabel>

#include "deque"
#include "random"

class LinearCongruentialGenerator
{
public:
    std::deque<int> numbersGenerated;
    int valuesCount;

    LinearCongruentialGenerator(int);

    void generateValues();
    void clearValues();

    void searchingNumbers(QLabel*);
    unsigned long int getNextNumber();

private:
    unsigned long int m_seed = 1;
    bool isSearch = false;

    unsigned long int generatedNumber();
};

#endif // LINEARCONGRUENTIALGENERATOR_H
