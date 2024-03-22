#include "GameCard.h"
#include <iostream>
#include "../../tools/randomGenerator/RandomGenerator.h"

void GameCard::setCardType() {
    int random = RandomGenerator::getRandom(2,4);
    switch (random) {
        case 1:
            this->cardType = "Clubs";
            break;
        case 2:
            this->cardType = "Diamonds";
            break;
        case 3:
            this->cardType = "Hearts";
            break;
        case 4:
            this->cardType = "Spades";
            break;
    }
}
std::string GameCard::getCardType() {
    return this->cardType;
}
void GameCard::setCardNumber() {
    this->cardNumber = RandomGenerator::getRandom(1,13);
}
int GameCard::getCardNumber() {
    return this->cardNumber;
}

std::string GameCard::rolling() {
    this->setCardType();
    this->setCardNumber();
    return this->cardType + " " + this->convertCardNumberToString(this->cardNumber);
}
std::string GameCard::convertCardNumberToString(int cardNumber) {
    switch (cardNumber) {
        case 11:
            return "Jack";
        case 12:
            return "Queen";
        case 13:
            return "King";
        case 1:
            return "A";
        default:
            return std::to_string(cardNumber);
    }
}