#ifndef CASHALGORITHM_H
#define CASHALGORITHM_H
class CashAlgorithm
{
public:
    virtual double getResult(double & money)=0;
};

class CashNormal:public CashAlgorithm
{
public:
    double getResult(double &money)
    {
        return money;
    }

};

class CashDisCount : public CashAlgorithm
{

public:
    CashDisCount(double discount)
    {
        this->discount = discount;
    }
    double getResult(double &money)
    {
        return money*discount;
    }
private:
    double discount;
};

class CashMinus:public CashAlgorithm
{
public:
    CashMinus(int minus = 300)
    {
        this->minus = minus;
    }
    double getResult(double &money)
    {
        if(money > 300)
            return money-100;
        else
            return money;
    }
private:
    int minus;
};
#endif // CASHALGORITHM_H
