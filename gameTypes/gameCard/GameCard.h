#ifndef JDR_GAMECARD_H
#define JDR_GAMECARD_H
#include <iostream>

class GameCard {
private:
    std::string cardType;
    int cardNumber;
    // Converting int to string fo cards
    std::string convertCardNumberToString(int cardNumber);
public:
    // I dont use rollingIntreface here cause i wouldlike make own rolling
    std::string rolling();
    void setCardType();
    std::string getCardType();
    void setCardNumber();
    int getCardNumber();
};


#endif //JDR_GAMECARD_H
