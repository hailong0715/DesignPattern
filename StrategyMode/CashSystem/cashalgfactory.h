#ifndef CASHALGFACTORY_H
#define CASHALGFACTORY_H
#include "cashalgorithm.h"
class CashAlgFactory
{

public:
    CashAlgFactory(int algIndex)
    {
        this->algIndex = algIndex;
        switch(algIndex)
        {
            case 0:
                ca = new CashNormal();
            break;
        case 1:
            ca = new CashDisCount(0.88);
            break;
        case 2:
            ca = new CashMinus(500);
            break;

        }
        this->ca = ca;

    }
    double getResult(double money )
    {
        return ca->getResult(money);
    }
private:
    int algIndex;
    CashAlgorithm* ca;
};
#endif // CASHALGFACTORY_H
