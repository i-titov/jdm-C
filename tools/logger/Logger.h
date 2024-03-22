#ifndef JDR_LOGGER_H
#define JDR_LOGGER_H
#include <iostream>

 class Logger {
 public:
     enum logs {error = 1, success = 0};
     enum gameLogs {start = 1, end = 0};
     static void log(int msg);
     static void gameLog(int msg);
};
#endif //JDR_LOGGER_H
