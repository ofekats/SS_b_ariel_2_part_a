#include "game.hpp"
using namespace ariel;

Game::Game() //defult constructor
{
    this->p1_=Player("d1");
    this->p2_=Player("d2");
}

Game::Game(Player p1, Player p2) //constructor
{
    this->p1_=p1;
    this->p1_=p2;
}

void Game::playTurn()
{

}

void Game::printLastTurn() // print the last turn stats
{

}

void Game::playAll() //playes the game untill the end
{

}

void Game::printWiner() // prints the name of the winning player
{

}

void Game::printLog() // prints all the turns played one line per turn
{

}

void Game::printStats() // for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
{

}