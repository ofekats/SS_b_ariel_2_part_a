#pragma once

#include <string>
#include <stack>
#include "card.hpp"

namespace ariel{
    class Player{
    public:
        Player(); //defult constructor
        Player(std::string name); //constructor
        int stacksize(); //return the amount of cards left
        int cardesTaken(); //return the amount of cards this player has won
    private:
        std::string name_;
        // int num_of_win_cards_;
        // int size_of_stack_;
        // std::stack<card> player_stack_;
        // int num_of_win_round_;
    };
}