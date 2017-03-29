#include "../hpp/Object.hpp"

Object::Object(int xPos, int yPos) : xPos(xPos), yPos(yPos) {
}

int Object::getXPos(){
	return this->xPos;
}

int Object::getYPos(){
	return this->yPos;
}

void Object::setXPos(int newXPos){
	this->xPos = newXPos;
}

void Object::setYPos(int newYPos){
	this->yPos = newYPos;
}

	
