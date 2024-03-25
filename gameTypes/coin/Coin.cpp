#include "../../tools/randomGenerator/RandomGenerator.h"
#include "../../tools/logger/Logger.h"
#include "Coin.h"
using namespace std;

Coin::Coin(int draws, int result){
    //constructor with params by default from draws 5 and result 0
    this->draws = draws;
    this->result = result;
};
void Coin::setResult(int result){
    this->result = result;
}
int Coin::getResult(){
    return this->result;
}
int Coin::tossCoin(int x) {
    Logger::gameLog(Logger::coin);
    if (x == 0){
        this->setResult(1);
        return 1;
    }
    int result = RandomGenerator::getRandom(0,1) % 2;
    if (result == 0) {
        this->setResult(0);
        return 0;
    }
    return this->tossCoin(x - 1);
}
int Coin::rolling() {
    this->tossCoin(this->draws);
    return this->getResult();
}

