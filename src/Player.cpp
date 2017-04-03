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

void Player::updatePlayerPosition(int a, Graphics g) 
{
    //std::vector<std::string> partsToDraw = getPartsToUpdate();
    //for(auto it = partsToDraw.begin(); it != partsToDraw.end(); ++it)
	//{
    //    
    //}
    //getItemsToDraw()["head"].x = 5; 
    
    std::unordered_map<std::string, Coordinate>& p = getItemsToDraw();
    
    //Moving left
    if(a == 'a')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).x = ((*it).second).x - 1;
        }
    }
    else if(a == 's')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).y = ((*it).second).y + 1;
        }
    }
    else if(a == 'd')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).x = ((*it).second).x + 1;
        }
    }
    else if(a == 'w')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).y = ((*it).second).y - 1;
        }
    }
}
