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
    cout << "choose locations for you ships:  (instruction in main menu might be helpful)" << endl;

    player_ships[0] = new Destroyer(input());
    cout << player_ships[0]->x << player_ships[0]->y << player_ships[0]->is_sunk();
}

void Game::computer_setting_ships() {

}

string Game::input(){
    string s;
    while (1){
        cin >> s;
        if (s.length() != 3){
            cout << "error, take a look on instruction or try again ... ";
        } else {
            return s;
        }
    }
}