#ifndef JDR_DICE_H
#define JDR_DICE_H
#include "../../interfaces/RollingInterface.h"
class Dice: public RollingInterface {
private:
    //First dice
    int firstDice;
    //Second dice
    int secondDice;
    // Numbers for make a rang of dices
    int maxFace;
    int minFace;
public:
    Dice(int min = 1, int max = 6);
    void setFirstDice();
    void setSecondDice();
    // rolling fn from interface
    int rolling();
};


#endif //JDR_DICE_H
