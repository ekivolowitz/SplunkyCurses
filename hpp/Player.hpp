#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player : public Object {
    private:
        std::pair<char, std::pair<int, int> > head;
        std::pair<char, std::pair<int, int> > body;
        std::pair<char, std::pair<int, int> > leftArm;
        std::pair<char, std::pair<int, int> > torso;
        std::pair<char, std::pair<int, int> > rightArm;
        std::pair<char, std::pair<int, int> > leftLeg;
        std::pair<char, std::pair<int, int> > rightLeg;
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
