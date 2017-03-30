#include "../hpp/Object.hpp"
/**
 * Standard constructor for the Object superclass.
 * @param int xPos - the integer to set the xCoordinate of the object to.
 * @param int yPos - the integer to set the yCoordinate of the object to.
 */
Object::Object(int xPos, int yPos) : xPos(xPos), yPos(yPos){
}

/**
 * Returns the xPos of the object.
 * @param none
 * @return int xPos of coordinate.
 */
int Object::getXPos(){
	return this->xPos;
}

/**
 * Returns the yPos of the object.
 * @param none
 * @return int yPos of coordinate
 */
int Object::getYPos(){
	return this->yPos;
}

/**
 * Sets the xPos of the object.
 * @param int newXPos - the int to set the new xPos to.
 * @return void
 */
void Object::setXPos(int newXPos){
	this->xPos = newXPos;
}

/**
 * Sets the yPos of the object.
 * @param int newYPos - the new YPos to set the object's yPos to.
 * @return void
 */
void Object::setYPos(int newYPos){
	this->yPos = newYPos;
}

/**
 * Gets the vector of all the points to draw for the object.
 * @param none
 * @return vector<pair<char, pair<int, int>>> for the object.
 */
std::vector<std::pair<char, std::pair<int, int> > > Object::getItemsToDraw()
{
    return itemsToDraw;
}

/**
 * This function creates a pair containing a char and a pair.
 * It then pushes that pair onto the vector of all the coordinates to draw for the pair.
 * @param char c - character to insert into pair.
 * @param int xPos - x coordinate to insert into the pair's pair.
 * @param int yPos - y coordinate to insert into the pair's pair.
 * @return void
 */
void Object::addItemToDraw(char c, int xPos, int yPos)
{
    std::pair<int, int> coordinates (xPos, yPos);
    std::pair<char, std::pair<int, int> > drawValue (c, coordinates);
    itemsToDraw.push_back(drawValue);
}

/**
 * This function updates solely the coordinate pair subset of a pair in the itemsToDraw pairs.
 * @param pair<int, int> p - the pair to update.
 * @param int xPos - the x position to update the pair to.
 * @param int yPos - the y position to update the pair to.
 */
void Object::updateCharacterPosition(std::pair<int, int>& p, int xPos, int yPos)
{
    p.first = xPos;
    p.second = yPos;
}


