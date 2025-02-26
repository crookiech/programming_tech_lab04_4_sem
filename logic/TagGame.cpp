#include "TagGame.h"
#include <iostream>

void TagGame::Shuffle() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов TagGame::Shuffle...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов TagGame::Shuffle...");

    std::cout << "Поле перемешано" << std::endl;

    newConsoleLoggerFactory->Log("TagGame::Shuffle успешно вызван.");
    newFileLoggerFactory->Log("TagGame::Shuffle успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}
void TagGame::Move(int index, int step) { // step - шаг (1 - вверх, 2 - вниз, 3 - влево, 4 - вправо)
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов TagGame::Move...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов TagGame::Move...");

    if (index < 1 || index > 15) {
        std::cout << "Вы неверно ввели индекс фишки" << std::endl;
    } else {
        if (step == 1) {
            std::cout << index << " переместили вверх" << std::endl;
        } else if (step == 2) {
            std::cout << index << " переместили вниз" << std::endl;
        } else if (step == 3) {
            std::cout << index << " переместили влево" << std::endl;
        } else if (step == 4) {
            std::cout << index << " переместили вправо" << std::endl;
        } else {
            std::cout << "Такой шаг сделать нельзя" << std::endl;
        }
    }
    newConsoleLoggerFactory->Log("TagGame::Move успешно вызван.");
    newFileLoggerFactory->Log("TagGame::Move успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}
void TagGame::Play() {}
void TagGame::Info() {}

RateYourMindPal::RateYourMindPal() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов RateYourMindPal::RateYourMindPal...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов RateYourMindPal::RateYourMindPal...");

    std::cout << "Вы создали игру " << gameName << std::endl;

    newConsoleLoggerFactory->Log("RateYourMindPal::RateYourMindPal успешно вызван.");
    newFileLoggerFactory->Log("RateYourMindPal::RateYourMindPal успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}
void RateYourMindPal::Play() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов RateYourMindPal::Play...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов RateYourMindPal::Play...");

    std::cout << "Вы играете в " << gameName << std::endl;

    newConsoleLoggerFactory->Log("RateYourMindPal::Play успешно вызван.");
    newFileLoggerFactory->Log("RateYourMindPal::Play успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}
void RateYourMindPal::Info() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов RateYourMindPal::Info...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов RateYourMindPal::Info...");

    std::cout << "Вы играете в " << gameName << std::endl;

    newConsoleLoggerFactory->Log("RateYourMindPal::Info успешно вызван.");
    newFileLoggerFactory->Log("RateYourMindPal::Info успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}

ClassicTagGame::ClassicTagGame() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов RateYourMindPal::ClassicTagGame...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов RateYourMindPal::ClassicTagGame...");

    std::cout << "Вы создали игру " << gameName << std::endl;

    newConsoleLoggerFactory->Log("RateYourMindPal::ClassicTagGame успешно вызван.");
    newFileLoggerFactory->Log("RateYourMindPal::ClassicTagGame успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}
void ClassicTagGame::Play() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов ClassicTagGame::Play...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов ClassicTagGame::Play...");

    std::cout << "Вы играете в " << gameName << std::endl;

    newConsoleLoggerFactory->Log("ClassicTagGame::Play успешно вызван.");
    newFileLoggerFactory->Log("ClassicTagGame::Play успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}
void ClassicTagGame::Info() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов ClassicTagGame::Info...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов ClassicTagGame::Info...");

    std::cout << "Вы играете в " << gameName << std::endl;

    newConsoleLoggerFactory->Log("ClassicTagGame::Info успешно вызван.");
    newFileLoggerFactory->Log("ClassicTagGame::Info успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}