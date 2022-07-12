//
// Created by witek on 11.07.2022.
//

#include "../header_files/Board.h"

Board::Board(int BS):board_size(BS) {
    board = new field*[board_size];
    for (int i=0; i<board_size; i++){
        board[i] = new field[board_size];
    }
    for (int x=0; x<board_size; x++){
        for (int y=0; y<board_size; y++){
            board[x][y].x = x;
            board[x][y].y = y;
            board[x][y].ship = nullptr;
            board[x][y].was_shot = false
        }
    }
}