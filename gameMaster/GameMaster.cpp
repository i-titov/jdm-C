#include "GameMaster.h"
#include "../gameTypes/coin/Coin.h"
#include "../gameTypes/dice/Dice.h"
#include "../gameTypes/gameCard/gameCard.h"
#include "../tools/logger/Logger.h"
#include "../tools/randomGenerator/RandomGenerator.h"

void GameMaster::pleaseGiveMeACrit(int success, int critical, int fumble) {

}
void GameMaster::startRolling() {
    Logger::gameLog(Logger::start);
    int random = RandomGenerator::getRandom(1, 3);
    switch (random) {
        case 1: {
            Logger::gameTypeLog("Coin");
            Coin coin;
            coin.rolling();
            break;
        }
        case 2: {
            Logger::gameTypeLog("Dice");
            Dice dice;
            dice.rolling();
            break;
        }
        case 3: {
            Logger::gameTypeLog("Cards");
            GameCard cards;
            cards.rolling();
            break;
        }
        default:
            Logger::gameLog(Logger::end);
    }
}
