#ifndef LINEARCONGRUENTIALGENERATOR_H
#define LINEARCONGRUENTIALGENERATOR_H

#include <QDebug>
#include "array"

class LinearCongruentialGenerator
{
public:
    bool isDebug = false;

    LinearCongruentialGenerator(std::array<int, 4>);

    void searchNextNumber();

    int getNextNumber();

private:
    int aRes;
    int cRes;
    int mRes;
    std::array<int,4> valuesArray;
    int maxValue;
    bool isSearch;

    void bruteForce();

    void algorithmEuclida();

    int modular_inverse(int a, int m);

    void debugNumbers();

};

#endif // LINEARCONGRUENTIALGENERATOR_H
