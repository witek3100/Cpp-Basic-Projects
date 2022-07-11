//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_GAME_H
#define SHIPS_GAME_H
#include <iostream>
#include "Board.h"

using namespace std;

class Game {
    Board enemy_board, player_boaard;
    int board_size;
public:
    Game(int BoardSize){
        board_size = BoardSize;
    }
};


#endif //SHIPS_GAME_H
