#include "Dice.h"
#include "../../tools/randomGenerator/RandomGenerator.h"
using namespace std;

Dice::Dice(int min, int max){
    //constructor with params by default from 1 to 6
    this->maxFace = max;
    this->minFace = min;
}

void Dice::setFirstDice(float chance) {
    //set for first dice
    this->firstDice = RandomGenerator::getRandom(this->minFace, this->maxFace) * chance;
}

void Dice::setSecondDice(float chance) {
    //set for second dice
    this->secondDice = RandomGenerator::getRandom(this->minFace, this->maxFace) * chance;
}

int Dice::rolling(float chance) {
    this->setFirstDice(chance);
    this->setSecondDice(chance);
    //sum of 2 dices in one int
    return this->firstDice + this->secondDice;
}
void Dice::showResult() {
    std::cout << "-----We have " << this->rolling() << "-----" << std::endl;
}
