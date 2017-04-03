#include "../hpp/Player.hpp"
Player::Player(int initXPos, int initYPos) : Object(initXPos, initYPos), health(3)
{
    
	
	head.x = xCoordinate;
	head.y = yCoordinate;
	head.c = 'O';

	body.x = xCoordinate;
	body.y = yCoordinate + 1;
	body.c = '|';

	leftArm.x = xCoordinate - 1;
	leftArm.y = yCoordinate + 1;
	leftArm.c = '/';

	torso.x = xCoordinate;
	torso.y = yCoordinate + 2;
	torso.c = '|';

	rightArm.x = xCoordinate + 1;
	rightArm.y = yCoordinate + 1;
	rightArm.c = '\\';

	leftLeg.x = xCoordinate - 1;
	leftLeg.y = yCoordinate + 3;
	leftLeg.c = '/';

	rightLeg.x = xCoordinate + 1;
	rightLeg.y = yCoordinate + 3;
	rightLeg.c = '\\';

	addItemsToDraw("head", head);
	addItemsToDraw("body", body);
	addItemsToDraw("leftArm", leftArm);
	addItemsToDraw("torso", torso);
	addItemsToDraw("rightArm", rightArm);
	addItemsToDraw("leftLeg", leftLeg);
	addItemsToDraw("rightLeg", rightLeg);
}

// void Player::decrHealth()
// {
// 		health--;
// }

// bool Player::isAlive()
// {
// 	if (health > 0)
//     {
// 		return true;
// 	}
// 	else
//     {
// 		return false;
//     }
// }

// int Player::xCoordinate
// {
//     return xPos;
// }

// int Player::yCoordinate
// {
//     return yPos;   
// }

void Player::updatePosition(int a) 
{
	this->Object::updatePosition(a);
}
