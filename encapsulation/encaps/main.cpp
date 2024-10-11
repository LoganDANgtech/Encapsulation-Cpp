#include <iostream>
#include <vector>
#include <string>
#include "World.h"

int main(int argc, const char* argv[]) {
    int sim = 1;
    char ask = ' ';
    World W = World();
    W.Init();

    while (sim == 1) {
        if (W.Step() == 0){
            sim = 0;
        }
        std::cin >> ask;
        if (ask == 's'){
            sim = 0;
        }
    }
    std::cout << "Simulation Finished";
    return 0;
}