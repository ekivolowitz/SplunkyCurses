#ifndef ARROW_HPP
#define ARROW_HPP

#include "Object.hpp"
#include <vector>
#include "Coordinate.hpp"



class Arrow : public Object {
public:
	/**
	*@brief Constructor for arrow
	*
	*@param initXPos The initial x coordinate of the arrow
	*@param initYPos The initial y coordinate of the arrow
	*/
    Arrow();
    void updatePosition();
    int getX();
    void makeNewArrow();
private:
        int xPos;
        int yPos;
        Coordinate head;
        Coordinate body1;
        Coordinate body2;

};

#endif
