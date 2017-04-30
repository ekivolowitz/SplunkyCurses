#include "../hpp/Object.hpp"

/**
 * Standard constructor for the Object superclass.
 * @param int xPos - the integer to set the xCoordinate of the object to.
 * @param int yPos - the integer to set the yCoordinate of the object to.
 */
Object::Object(int x, int y){
	xCoordinate = x;
	yCoordinate = y;
}

Object::Object()
{

}
//void Object::addToPartsToUpdate(std::string s)
//{
//	parts.push_back(s);
//}




// /**
//  * Returns the xPos of the object.
//  * @param none
//  * @return int xPos of coordinate.
//  */
// int Object::getXPos(){
// 	return this->xPos;
// }

// /**
//  * Returns the yPos of the object.
//  * @param none
//  * @return int yPos of coordinate
//  */
// int Object::getYPos(){
// 	return this->yPos;
// }

// /**
//  * Sets the xPos of the object.
//  * @param int newXPos - the int to set the new xPos to.
//  * @return void
//  */
// void Object::setXPos(int newXPos){
// 	this->xPos = newXPos;
// }

// /**
//  * Sets the yPos of the object.
//  * @param int newYPos - the new YPos to set the object's yPos to.
//  * @return void
//  */
// void Object::setYPos(int newYPos){
// 	this->yPos = newYPos;
// }

// /**
//  * Gets the vector of all the points to draw for the object.
//  * @param none
//  * @return vector<Coordinate> .
//  */
std::unordered_map<std::string, Coordinate>& Object::getItemsToDraw()
{
	return itemsToDraw;
}



// *
//  * This function creates a pair containing a char and a pair.
//  * It then pushes that pair onto the vector of all the coordinates to draw for the pair.
//	* @param Coordinate c - Coordinate to add to vector.
//  * @return void
 void Object::addItemsToDraw(std::string name, Coordinate c)
{
	itemsToDraw[name] = c;
}


// /**
//  * This function updates solely the coordinate pair subset of a pair in the itemsToDraw pairs.
//  * @param pair<int, int> p - the pair to update.
//  * @param int xPos - the x position to update the pair to.
//  * @param int yPos - the y position to update the pair to.
//  */
// //void Object::updateCharacterPosition(std::pair<int, int>& p, int xPos, int yPos)
// //{
// //    p.first = xPos;
// //    p.second = yPos;
// //}

void Object::updatePosition(int a)
{
	std::unordered_map<std::string, Coordinate>& p = getItemsToDraw();
    int lowestPoint = 0;
    for(auto it = p.begin(); it != p.end(); ++it)
    {
        if(((*it).second).y > lowestPoint) lowestPoint = ((*it).second).y;
    }

    //Moving left
    /*
    if(a == 'a')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).x = ((*it).second).x - 1;
        }
    }
    */
    if(a == 's')
    {
        if(lowestPoint + 1 <  40)
        {
            
            for(auto it = p.begin(); it != p.end(); ++it)
            {
                ((*it).second).y = ((*it).second).y + 1;
            }
    
        }
    }
    /*
    else if(a == 'd')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).x = ((*it).second).x + 1;
        }
    }
    */
    else if(a == 'w')
    {
        for(auto it = p.begin(); it != p.end(); ++it)
        {
            ((*it).second).y = ((*it).second).y - 1;
        }
    }    
}

