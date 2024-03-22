#ifndef JDR_COIN_H
#define JDR_COIN_H
#include "../../interfaces/RollingInterface.h"

class Coin: public RollingInterface{
private:
    int draws;
    int result;
public:
    Coin(int draws = 5, int result = 0);
    void setResult(int result);
    int getResult();
    int tossCoin(int x);
    // rolling fn from interface
    int rolling();
};
#endif //JDR_COIN_H
