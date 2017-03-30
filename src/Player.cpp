#include "../hpp/Player.hpp"

Player::Player(int initXPos, int initYPos) : Object(initXPos, initYPos), health(3)
{
	//this->health = 3;
}

void Player::decrHealth()
{
		health--;
}

bool Player::isAlive()
{
	if (health > 0)
    {
		return true;
	}
	else
    {
		return false;
    }
}

