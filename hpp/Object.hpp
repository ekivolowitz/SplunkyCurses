#ifndef OBJECT_HPP
#define OBJECT_HPP

class Object{
private:
	int xPos;
	int yPos;
public:
	Object(int initXPos, int initYPos);

	int getXPos();

	int getYPos();

	void setXPos(int newXPos);

	void setYPos(int newYPos);	
}

#endif
