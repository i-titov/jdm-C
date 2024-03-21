#include <iostream>
#include "tryYourLuck/TryYourLuck.h"

using namespace std;

int main() {
    TryYourLuck tyl;
    int random = tyl.getRandom();
    std::cout << "random:" <<random<< std::endl;
    return 0;
}
