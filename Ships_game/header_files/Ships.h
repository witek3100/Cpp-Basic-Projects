//
// Created by witek on 10.07.2022.
//

#ifndef SHIPS_SHIPS_H
#define SHIPS_SHIPS_H
#include <string>
#include <iostream>

struct ship_field {
    int x, y;
    bool is_hit;
};

class Ships {
public:
    int size, x, y;
    bool orientation;
    ship_field *ship_fields;
    Ships(int sz, int x, int y, bool orientation);

};

#endif //SHIPS_SHIPS_H
