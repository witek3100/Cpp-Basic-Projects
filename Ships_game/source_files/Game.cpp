//
// Created by witek on 11.07.2022.
//

#include "../header_files/Game.h"
#include "string"

Game::Game(int BoardSize):board_size(BoardSize) {
    system("clear");

    player_setting_ships();
    computer_setting_ships();
}

void Game::player_setting_ships() {
    cout << "choosing locations for you ships (instruction in main menu might be helpful)" << endl;

    cout << "choose location for destroyer (ship size 5): " << endl;
    player_ships[0] = new Destroyer(input(5));
    cout << player_ships[0]->x << player_ships[0]->y << player_ships[0]->is_sunk();
}

void Game::computer_setting_ships() {

}

string Game::input(int ship_size) {
    while (1) {
        string str;
        cin >> str;
        int x = static_cast<int>(str[0]);
        int y = static_cast<int>(str[1]);
        char orientation = str[2];
        if (orientation == 'v') {
            if (!(0 <= x < board_size && 0 <= y && y + ship_size < board_size)) {
                cout << "error, ships exceeds board, try again...";
            } else if (ship_on_nearby_field(x,y,orientation,ship_size)){
                cout << "error, ship is touching another ship, try again..,";
            } else {
                return str;
            }
        }
    }
}

bool Game::ship_on_nearby_field(int x, int y, int ship_size, int orientation) {
    for (int i=0;  )
}