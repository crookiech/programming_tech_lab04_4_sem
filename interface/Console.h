#ifndef CONSOLE_H
#define CONSOLE_H

#include "C:/programming_tech/lab04/logic/TagGame.h"

class Console {
private:
    TagGame* game;
public:
    Console(TagGame* game);
    void run();
};

#endif