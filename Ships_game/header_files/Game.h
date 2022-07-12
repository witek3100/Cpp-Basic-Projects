//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_GAME_H
#define SHIPS_GAME_H
#include <iostream>
#include "Board.h"
#include "Ships.h"
#include <vector>

using namespace std;

class Game {
public:
    const int carrier_size = 5;
    const int destroyer_size = 4;
    const int frigate_size = 3;
    const int submarine_size = 2;
    const int board_size;
    Board *player_board;
    Board *enemy_board;
    vector<Ships*> player_ships;
    vector<Ships*> enemy_ships;

    Game(int BS);
    void player_setting_ships();
    void enemy_setting_ships();
    bool input_check(string, int);
    void print_player_board();

};

#endif //SHIPS_GAME_H
