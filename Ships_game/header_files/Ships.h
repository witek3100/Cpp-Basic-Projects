//
// Created by witek on 10.07.2022.
//

#ifndef SHIPS_SHIPS_H
#define SHIPS_SHIPS_H
#include <string>

using namespace std;

const int destroyer_size = 5;

struct ship_field{
    int x, y;
    bool is_hit;
};

class Ships {
public:
    int x, y;

    virtual bool is_sunk();
    Ships();
};

class Destroyer : public Ships {
    ship_field fields[destroyer_size];
public:
    Destroyer(string s);
    bool is_sunk();
};
#endif //SHIPS_SHIPS_H
