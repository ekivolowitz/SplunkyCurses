#include "../hpp/Object.hpp"

Object::Object(int xCoor, int yCoor) : xCoor(xCoor), yCoor(yCoor) {
}

	int getXPos(){
		return this->xPos;
	}

	int getYPos(){
		return this->yPos;
	}

	void setXPos(int newXPos){
		this->xPos = newXPos;
	}

	void setYPos(int newYPos){
		this->yPos = newYPos;
	}

	
