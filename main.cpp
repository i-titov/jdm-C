#include <iostream>
#include "gameTypes/gameCard/GameCard.h"
#include "tools/logger/Logger.h"

using namespace std;

int main() {
    GameCard gc;
    string test = gc.rolling();
    std::cout << "random:"<< test << std::endl;
    Logger::log(Logger::success);
    return 0;
}
