#include "player.hpp"
using namespace ariel;

Player::Player() //defult constructor
{
    this->name_ = "defult";
}

Player::Player(std::string name) //constructor
{
    this->name_ = name;
}

int Player::stacksize() //return the amount of cards left
{
    return -1;
}

int Player::cardesTaken() //return the amount of cards this player has won
{
    return -1;
}