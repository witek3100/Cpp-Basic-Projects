#include <iostream>
#include "Ships.h"
#include <cstdlib>

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
        switch(n){
            case 1:{
                system("clear");
            }
            case 2:{
                system("clear");
            }
            case 3:{
                system("clear");
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

int main(){
    bool exit = false;
    while (!exit){
        Menu menu;
        if (menu.exit == true){
            exit = true;
        }
    }
    return 0;
}