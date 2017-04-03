#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"
#include "Graphics.hpp"
#include <vector>
#include <string>
#include <iostream>

class Player : public Object {
    private:
    	int xPos;
        int yPos;
        Coordinate head;
        Coordinate body;
        Coordinate leftArm;
        Coordinate torso;
        Coordinate rightArm;
        Coordinate leftLeg;
        Coordinate rightLeg;
        int health;

    public:
        /**
        *@brief Constructor for player
        */
        Player(int x, int y);

	    // void movePlayerLeft();
	
        // void movePlayerRight();

	    // void jump();

	    // void decrHealth();

	    // bool isAlive();
        void updatePosition(int a);
        // int getXPos();
        // int getYPos();


};

#endif
