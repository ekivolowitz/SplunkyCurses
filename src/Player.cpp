#include "Player.hpp"

Player::Player(int initXPos, int initYPos) : Object(initXPos, initYPos){
	this->health = 3;
}

	void decrHealth(){
		health--;
	};

	bool isAlive(){
		if (health > 0){
			return true;
		}
		else{
			return false;
		}
	};
}

