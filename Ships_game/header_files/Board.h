//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_BOARD_H
#define SHIPS_BOARD_H
struct field {
    int x, y;
};

class Board {
    const int board_size;
    field **board;
    field *occupied_fields;
};


#endif //SHIPS_BOARD_H
