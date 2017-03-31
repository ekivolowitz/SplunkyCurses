#include "../hpp/Player.hpp"

Player::Player(int initXPos, int initYPos) : Object(initXPos, initYPos), health(3)
{
    head = std::make_pair('O', std::pair<int, int>(initXPos, initYPos));
    body = std::make_pair('|', std::pair<int, int>(initXPos, initYPos + 1));
    leftArm = std::make_pair('/', std::pair<int, int>(initXPos - 1, initYPos + 1));
    torso = std::make_pair('|', std::pair<int, int>(initXPos, initYPos + 2));
    rightArm = std::make_pair('\\', std::pair<int, int>(initXPos + 1, initYPos + 1));
    leftLeg = std::make_pair('/', std::pair<int, int>(initXPos- 1, initYPos + 3));
    rightLeg = std::make_pair('\\', std::pair<int, int>(initXPos + 1, initYPos + 2));
    addItemToDraw(head.first, (head.second).first, (head.second).second);
    addItemToDraw(body.first, (body.second).first, (body.second).second);
    addItemToDraw(leftArm.first, (leftArm.second).first, (leftArm.second).second);
    addItemToDraw(torso.first, (torso.second).first, (torso.second).second);
    addItemToDraw(rightArm.first, (rightArm.second).first, (rightArm.second).second);
    addItemToDraw(leftLeg.first, (leftLeg.second).first, (leftLeg.second).second);
    addItemToDraw(rightLeg.first, (rightLeg.second).first, (rightLeg.second).second);
}

void Player::decrHealth()
{
		health--;
}

bool Player::isAlive()
{
	if (health > 0)
    {
		return true;
	}
	else
    {
		return false;
    }
}





