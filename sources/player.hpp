#pragma once
// #ifdef PLAYER_H
// #define PLAYER_H
#include <string>
// using namespace ariel;

namespace ariel{
    class Player{
    public:
        Player(); //defult constructor
        Player(std::string name); //constructor
        int stacksize(); //return the amount of cards left
        int cardesTaken(); //return the amount of cards this player has won
    private:
        std::string name_;
    };
}



// #endif