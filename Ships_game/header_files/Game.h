//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_GAME_H
#define SHIPS_GAME_H
#include <iostream>
#include "Board.h"
#include "Ships.h"

using namespace std;

class Game {
    Board enemy_board, player_boaard;
    Ships **enemy_ships = new Ships*[6];
    Ships **player_ships = new Ships*[6];
    const int board_size;
public:
    Game(int BoardSize);
    void player_setting_ships();
    void computer_setting_ships();
    string input();
};


#endif //SHIPS_GAME_H
