#include "GameMaster.h"
#include "../gameTypes/coin/Coin.h"
#include "../gameTypes/dice/Dice.h"
#include "../gameTypes/gameCard/gameCard.h"
#include "../tools/randomGenerator/RandomGenerator.h"

int GameMaster::pleaseGiveMeACrit(int success, int critical, int fumble) {

    return success * critical * fumble;
}
void GameMaster::startRolling() {
    Logger::log(Logger::start);
    int random = RandomGenerator::getRandom(1, 3);
    switch (random) {
        case 1: {
            Logger::gameTypeLog("Coin");
            Coin coin;
            Logger::log(Logger::coin);
            coin.showResult();
            Logger::log(Logger::end);
            break;
        }
        case 2: {
            Logger::gameTypeLog("Dice");
            Dice dice;
            Logger::log(Logger::dices);
            dice.showResult();
            Logger::log(Logger::end);
            break;
        }
        case 3: {
            Logger::gameTypeLog("Cards");
            GameCard cards;
            Logger::log(Logger::cards);
            cards.showResult();
            Logger::log(Logger::end);
            break;
        }
    }
}
