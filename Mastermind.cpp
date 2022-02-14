// Mastermind.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>
#include "Game.h"

int main(int argc, char* argv[])
{
    Game* g;

    if (argc == 1) {
        g = new Game(5, 10);
    }
    else if (argc == 3){
        int targetSize = atoi(argv[1]);
        int maxTrys = atoi(argv[2]);
        g = new Game(targetSize, maxTrys);
    }
    else {
        std::cout << "Command line options\nmastermind <taget length> <max tries>\n\n";
        return - 1;
    }

    g->play();
}
