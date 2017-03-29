#ifndef FALLINGROCK_HPP
#define FALLINGROCK_HPP

#include "Object.hpp"

class FallingRock : public Object {
public:
        /**
        *@brief Constructor for rock
        *
        *@param initXPos The initial x coordinate of the rock
        *@param initYPos The initial y coordinate of the rock
        */
        FallingRock(int initXPos, int initYPos);
}

#endif
