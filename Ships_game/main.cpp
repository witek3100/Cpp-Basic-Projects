#include <iostream>
#include "Ships.h"

using namespace std;

struct field {
    bool was_shot;
    bool ship;
};

field EnemyBoard[10][10] ,PlayerBoard[10][10];
int player_ships_left = 6, enemy_ships_left = 6;

void print_boards(){
    cout << "YOUR SHIPS:" << endl << "\t shpis left: " << player_ships_left << "  ships destroyed: " << 6 - player_ships_left << endl;
    for (int i=0; i<10; i++ ){
        for (int j=0; j<10; j++){
            if (PlayerBoard[i][j].was_shot == true){
                if (PlayerBoard[i][j].ship == true){

                } else {
                    cout << "[0]";
                }
            } else {
                cout << "[ ]";
            }
        } cout << endl;
    }

    cout << "ENEMY SHIPS" << endl << "\t shpis left: " << enemy_ships_left << "  ships destroyed: " << 6 - enemy_ships_left << endl;
    for (int n=0; n<10; n++ ){
        for (int m=0; m<10; m++){
            if (EnemyBoard[n][m].was_shot == true){
                if (EnemyBoard[n][m].ship == true){

                } else {
                    cout << "[0]";
                }
            } else {
                cout << "[ ]";
            }
        } cout << endl;
    }

}
int main() {
    print_boards();
}
