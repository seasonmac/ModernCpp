//
// Created by season on 2021/11/23.
//

#ifndef MODERNCPP_LOGGER_H
#define MODERNCPP_LOGGER_H
#include "string"
#include "iostream"
class Logger {
    int mLine;
    std::string mFile;
    std::string mFunc;
public:
    Logger(std::string file, std::string func, int line)
            : mFile(file), mFunc(func), mLine(line) {
        std::cout << "" << mFile << ":" << mLine << " Enter " << mFunc << std::endl;
    }

    ~Logger() {
        std::cout << "" << mFile << ":" << mLine << " Leave " << mFunc << std::endl;
    }
};

#define LOG_ENTRY() Logger(std::string(__FILE_NAME__),std::string(__FUNCTION__) , __LINE__)

#endif //MODERNCPP_LOGGER_H
