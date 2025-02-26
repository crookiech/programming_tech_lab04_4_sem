#include "Console.h"
#include <iostream>

Console::Console(TagGame* game) : game(game) {}
void Console::run() {
    CreateLogger* consoleLoggerFactory = new CreateConsoleLogger();
    CreateLogger* fileLoggerFactory = new CreateFileLogger();

    ILogger* newConsoleLoggerFactory = consoleLoggerFactory->FactoryMethod();
    newConsoleLoggerFactory->Log("Вызов Console::run...");
    ILogger* newFileLoggerFactory = fileLoggerFactory->FactoryMethod();
    newFileLoggerFactory->Log("Вызов Console::run...");

    int choice;
    do {
        std::cout << "\nВыберите действие:\n";
        std::cout << "1. Играть\n";
        std::cout << "2. Перемешать поле\n";
        std::cout << "3. Сделать ход\n";
        std::cout << "4. Инфомация об игре\n";
        std::cout << "0. Выход\n";
        std::cout << std::endl;
        std::cout << "Ваш выбор: ";
        std::cin >> choice; // Получаем выбор пользователя.
        switch (choice) {
            case 1:
                game->Play();
                break;
            case 2: {
                game->Shuffle();
                break;
            }
            case 3:
                int index, step;
                std::cout << "Введите индекс фишки (1-15): ";
                std::cin >> index;
                std::cout << "Введите направление (1 - вверх, 2 - вниз, 3 - влево, 4 - вправо): ";
                std::cin >> step;
                game->Move(index, step);
                break;
            case 4: {
                game->Info();
                break;
            }
            case 0:
                std::cout << "Выход из игры.\n";
                break;
            default:
                std::cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0); // Продолжаем, пока пользователь не выберет выход.

    newConsoleLoggerFactory->Log("Console::run успешно вызван.");
    newFileLoggerFactory->Log("Console::run успешно вызван.");

    delete consoleLoggerFactory;
    delete newConsoleLoggerFactory;
    delete fileLoggerFactory;
    delete newFileLoggerFactory;
}