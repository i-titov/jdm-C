#include "Logger.h"
#include <iostream>

void Logger::log(int msg) {
    switch (msg) {
        case Logger::error:
            std::cout << "Something went wrong"<<std::endl;
            break;
        case Logger::success:
            std::cout << "OK"<<std::endl;
            break;
    }
}
void Logger::gameLog(int msg) {
    switch (msg) {
        case Logger::start:
            std::cout << "-----Start of the game-----"<<std::endl;
            break;
        case Logger::end:
            std::cout << "-----End of the game-----"<<std::endl;
            break;
    }
}