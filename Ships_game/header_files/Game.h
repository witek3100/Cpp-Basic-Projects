//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_GAME_H
#define SHIPS_GAME_H
#include <iostream>

using namespace std;

class Game {

    int board_size;
public:
    Game(int BoardSize){
        board_size = BoardSize;
        cout << board_size;
    }
};


#endif //SHIPS_GAME_H
