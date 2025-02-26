#include "ILogger.h"
#include <iostream>
#include <fstream>

void ILogger::Log(const std::string& message) {}

void ConsoleLogger::Log(const std::string& message) {
    std::cout << "[Console] " << message << std::endl;
}

void FileLogger::Log(const std::string& message) {
    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        file << "[File] " << message << std::endl;
        file.close();
    } else {
        std::cerr << "Error opening file: " << filename << std::endl;
    }
}