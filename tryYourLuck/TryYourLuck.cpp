//
// Created by IT on 21.03.2024.
//

#include "TryYourLuck.h"
#include <iostream>
#include <random>
using namespace std;

int TryYourLuck::getRandom() {
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define the distribution
    std::uniform_int_distribution<> dis(1, 3);

    int random = dis(gen);
    return random;
}