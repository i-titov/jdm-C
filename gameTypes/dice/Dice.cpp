#include "Dice.h"
#include "../../tools/randomGenerator/RandomGenerator.h"
using namespace std;

Dice::Dice(int min, int max){
    //constructor with params by default from 1 to 6
    this->maxFace = max;
    this->minFace = min;
}

void Dice::setFirstDice() {
    //set for first dice
    this->firstDice = RandomGenerator::getRandom(this->minFace, this->maxFace);
}

void Dice::setSecondDice() {
    //set for second dice
    this->secondDice = RandomGenerator::getRandom(this->minFace, this->maxFace);
}

int Dice::rolling() {
    this->setFirstDice();
    this->setSecondDice();
    //sum of 2 dices in one int
    return this->firstDice + this->secondDice;
}