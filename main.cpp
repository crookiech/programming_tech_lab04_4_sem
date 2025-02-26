#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "CreateTagGame.h"
#include "Console.h"


void clearFile(const std::string& filename) {
    if (std::filesystem::exists(filename)) { // Проверяем существование файла
        std::ofstream file(filename, std::ios::out | std::ios::in | std::ios::trunc);
        if (file.is_open()) {
            file.close();
        } else {
            std::cerr << "Невозможно открыть файл: " << filename << std::endl;
        }
    } else {
        std::cerr << "Файл '" << filename << "' не найден." << std::endl;
    }
}


int main() {
    clearFile("C:/programming_tech/lab04/log.txt");

    CreateTagGame* classicFactory = new CreateClassicTagGame();
    TagGame* classicGame = classicFactory->FactoryMethod();
    Console consoleClassicGame(classicGame);
    consoleClassicGame.run();

    std::cout << std::endl;

    CreateTagGame* rateFactory = new CreateRateYourMindPal();
    TagGame* rateGame = rateFactory->FactoryMethod();
    Console consoleRateGame(rateGame);
    consoleRateGame.run();

    delete classicGame;
    delete classicFactory;
    delete rateGame;
    delete rateFactory;

    return 0;
}