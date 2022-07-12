//
// Created by witek on 10.07.2022.
//
#include "../header_files/Ships.h"

Ships::Ships(int sz, int X, int Y, bool orientation):size(sz), x(X), y(Y), orientation(orientation) {
    ship_fields = new ship_field[size];
    if (orientation == 1){
        for (int i=0; i<size; i++){
            ship_fields[i].x = x;
            ship_fields[i].y = y+i;
            ship_fields[i].is_hit = false;
        }
    } else if (orientation == 0){
        for (int i=0; i<size; i++){
            ship_fields[i].x = x+1;
            ship_fields[i].y = y;
            ship_fields[i].is_hit = false;

        }
    }
}