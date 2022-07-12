//
// Created by witek on 11.07.2022.
//

#include "../header_files/Game.h"
#include "string"


Game::Game(int BS):board_size(BS) {

    player_board = new Board(board_size);
    enemy_board = new Board(board_size);
    player_setting_ships();
    enemy_setting_ships();
}


void Game::player_setting_ships() {
    cout << "choosing location for ships (instruction in main menu might be helpful) " << endl;
    cout << "choose location for destroyer (ship size 5):";
    string s;
    cin >> s;
    while (input_check(s, destroyer_size)){
        cin >> s;
    }

    bool orientation;
    if (s[2] == 'v'){orientation = 1;}
    else if (s[2] == 'h') { orientation = 0;}
    int x = static_cast<int>(s[0]);
    int y = static_cast<int>(s[1]);
    player_ships.push_back(new Ships(destroyer_size, x, y, s[2]));

    if (orientation == 1){
        for (int i=0; i<destroyer_size; i++){
            player_board->board[x][y+i].ship = player_ships[0];
        }
    } else if (orientation == 0){
        for (int i=0; i<destroyer_size; i++){
            player_board->board[x+1][y].ship = player_ships[0];
        }
    }
}

void Game::enemy_setting_ships() {
}

bool Game::input_check(string s, int ship_size) {
    int x = static_cast<int>(s[0]);
    int y = static_cast<int>(s[1]);
    char ornt = static_cast<char>(s[2]);
    if (!(ornt == 'v' || ornt == 'h')){
        cout << "error, wrong orientation (choose 'v' for vertical or 'h' for horizontal)";
        return true;
    }
    if (ornt == 'h'){
        if (!((0<x && x+ship_size<board_size) && (0<y<board_size))){
            cout << "error, ship exceeds board, try again...";
            return true;
        }
        for (int i=x-1; i<x+ship_size+2; i++) {
            for (int j=y-1;j<y+2; j++) {
                if (player_board->board[i][j].ship != nullptr){
                    cout << "too near to other ship, try again...";
                    return true;
                }
            }
        }
    } else if (ornt == 'v') {
        if (!((0<x<board_size) && (0<y && y+ship_size<board_size))){
            cout << "error, ship exceeds board, try again...";
            return true;
        }
        for (int i=x-1; i<x+2; i++) {
            for (int j=y-1;j<y+ship_size+2; j++) {
                if (player_board->board[i][j].ship != nullptr){
                    cout << "too near to other ship, try again...";
                    return true;
                }
            }
        }
    }

    return false;
}

void Game::print_player_board() {
    for (int y=0; y<board_size; y++){
        for (int x=0; x<board_size; x++){
            if (player_board->board[x][y].ship != nullptr){
                if (player_board->board[x][y].ship->ship_fields)
            }
        }
    }
}
