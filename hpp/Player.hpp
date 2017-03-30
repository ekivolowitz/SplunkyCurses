#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player : public Object {
    private:
    	int health;
    public:
        /**
        *@brief Constructor for player
        *
        *@param initXPos The initial x coordinate of the player
        *@param initYPos The initial y coordinate of the player
        */
        Player(int initXPos, int initYPos);

	    void movePlayerLeft();
	
        void movePlayerRight();

	    void jump();

	    void decrHealth();

	    bool isAlive();

};

#endif
