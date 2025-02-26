#include "CreateTagGame.h"
#include "C:/programming_tech/lab04/log/ILogger.h"
#include "C:/programming_tech/lab04/log/CreateLogger.h"
#include <iostream>

void CreateTagGame::info() {
    std::cout << "CreateTagGame - класс для создания игр в пятнашки различных видов" << std::endl;
}

TagGame* CreateRateYourMindPal::FactoryMethod() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов CreateRateYourMindPal::FactoryMethod...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов CreateRateYourMindPal::FactoryMethod...");

    RateYourMindPal* mindPal = new RateYourMindPal();

    newConsoleLoggerFactory->Log("CreateRateYourMindPal::FactoryMethod успешно вызван.");
    newFileLoggerFactory->Log("CreateRateYourMindPal::FactoryMethod успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;

    return mindPal;
}
void CreateRateYourMindPal::info() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов CreateRateYourMindPal::info...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов CreateRateYourMindPal::info...");

    std::cout << "CreateRateYourMindPal - класс для создания игр \"Rate your mind pal\"" << std::endl;

    newConsoleLoggerFactory->Log("CreateRateYourMindPal::info успешно вызван.");
    newFileLoggerFactory->Log("CreateRateYourMindPal::info успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}

TagGame* CreateClassicTagGame::FactoryMethod() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов CreateClassicTagGame::FactoryMethod...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов CreateClassicTagGame::FactoryMethod...");

    ClassicTagGame* classicGame = new ClassicTagGame();

    newConsoleLoggerFactory->Log("CreateClassicTagGame::FactoryMethod успешно вызван.");
    newFileLoggerFactory->Log("CreateClassicTagGame::FactoryMethod успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;

    return classicGame;
}
void CreateClassicTagGame::info() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов CreateClassicTagGame::info...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов CreateClassicTagGame::info...");

    std::cout << "CreateClassicTagGame - класс для создания игр в классические пятнашки" << std::endl;

    newConsoleLoggerFactory->Log("CreateClassicTagGame::info успешно вызван.");
    newFileLoggerFactory->Log("CreateClassicTagGame::info успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}