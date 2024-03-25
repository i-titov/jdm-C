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
            std::cout << "-----Start of the rolling-----"<<std::endl;
            break;
        case Logger::end:
            std::cout << "-----End of the rolling-----"<<std::endl;
            break;
        case Logger::coin:
            std::cout << "-----We toss the coin-----"<<std::endl;
            break;
    }
}
void Logger::gameTypeLog(std::string str) {
    std::cout << "-----We going to use " << str <<"-----"<<std::endl;
}