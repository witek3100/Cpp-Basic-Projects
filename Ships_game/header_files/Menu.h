//
// Created by witek on 11.07.2022.
//

#ifndef SHIPS_MENU_H
#define SHIPS_MENU_H
#include <iostream>
#include "Game.h"

using namespace std;

class Menu {
public:
    Menu(){
        exit = false;
        print_menu();
    }
    void print_menu(){
        cout << "\n------SHIPS GAME------" << "\n choose option:  1 - play    2 - instructions    3 - options    4 - exit" << endl;
        int n;
        cin >> n;
        int board_size = 10;
        switch(n){
            case 1:{
                system("clear");
                Game game(board_size);
                break;
            }
            case 2:{
                system("clear");
                break;
            }
            case 3:{
                system("clear");
                int opt = 0;
                while (opt != 3) {
                    cout << "1 - change board size  2 - change amount of ships  3 - return to main menu" << endl;
                    cin >> opt;
                    if (opt == 1) {
                        int bs;
                        while (bs != board_size) {
                            cout << "new board size: ";
                            cin >> bs;
                            if (bs > 0 && bs <= 20) {
                                board_size = bs;
                                cout << "new board size = " << board_size << endl;
                            } else {
                                cout << "board size must be greater then 0 and smaller than 21, try again..." << endl;
                            }
                        }
                    }
                    if (opt == 2){}
                }
                break;
            }
            case 4:{
                exit = true;
                cout << "exiting..." << endl;
                break;
            }
            default:{
                cout << "no action for this key, try again..." << endl;
                break;
            }
        }
    }
    bool exit;
};


#endif //SHIPS_MENU_H
