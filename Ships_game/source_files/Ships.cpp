//
// Created by witek on 10.07.2022.
//
#include "../header_files/Ships.h"

using namespace std;

Ships::Ships() {}

Destroyer::Destroyer(string s) {
    x = static_cast<int>(s[0]);
    y = static_cast<int>(s[1]);
    if (s[2] == 'v'){
        for (int i=0; i<destroyer_size; i++) {
            fields[i].is_hit = false;
            fields[i].x = x;
            fields[i].y = y + 1;
        }
    }
    if (s[2] == 'h'){
        for (int i=0; i<destroyer_size; i++) {
            fields[i].is_hit = false;
            fields[i].x = x + 1;
            fields[i].y = y;
        }
    }
}

bool Destroyer::is_sunk() {
    for (auto i: fields){
        if (!i.is_hit){
            return false;
        }
    } return true;
}

