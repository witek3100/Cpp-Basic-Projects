//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_BOARD_H
#define SHIPS_BOARD_H
#include "Ships.h"

struct field {
    int x, y;
    Ships *ship;
    bool was_shot;
};

class Board {
    const int board_size;
public:
    field **board;
    Board(int BS);
};

#endif