#pragma once
#include "player.hpp"

namespace ariel{
    class Game{
    public:
        Game(); //defult constructor
        Game(Player p1, Player p2); //constructor
        void playTurn(); 
        void printLastTurn(); // print the last turn stats
        void playAll(); //playes the game untill the end
        void printWiner(); // prints the name of the winning player
        void printLog(); // prints all the turns played one line per turn
        void printStats(); // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )

    private:
        Player p1_;
        Player p2_;

    };
}


