#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <unordered_map>
#include <vector>
#include <string>
#include "Coordinate.hpp"




class Object{

    private:
        std::unordered_map<std::string, Coordinate> itemsToDraw;
        std::vector<std::string> parts;

    public:
        
        int xCoordinate;
        int yCoordinate;

	    /**
         * Standard constructor for the Object superclass.
         */
        Object(int x, int y);
	    // Coordinate coord;
        // Coordinate getCoord();
        
        /**
         * Returns the xPos of the object.
         * @param none
         * @return int xPos of coordinate.
         */
        int getXPos();
	    

        /**
         * Returns the yPos of the object.
         * @param none
         */
        int getYPos();
	

        void addToPartsToUpdate(std::string s);

        /**
         * Gets the vector of all the points to draw for the object.
         * @param none
         * @return vector<pair<char, pair<int, int>>> for the object.
         */
        //std::vector<std::pair<char,std::pair<int,int> > > getItemsToDraw();
        std::unordered_map<std::string,Coordinate>& getItemsToDraw();
        void addItemsToDraw(std::string name, Coordinate c);

        /**
         * This function creates a pair containing a char and a pair.
         * It then pushes that pair onto the vector of all the coordinates to draw for the pair.
         * @param char c - character to insert into pair.
         * @param int xPos - x coordinate to insert into the pair's pair.
         * @param int yPos - y coordinate to insert into the pair's pair.
         * @return void
         */
        //void addItemToDraw(char c, int xPos, int yPos);
        

        /**
         * This function updates solely the coordinate pair subset of a pair in the itemsToDraw pairs.
         * @param pair<int, int> p - the pair to update.
         * @param int xPos - the x position to update the pair to.
         * @param int yPos - the y position to update the pair to.
         */
        //void updateCharacterPosition(std::pair<int, int>& p, int xPos, int yPos);
       
        //void updatePlayerPosition();

        /**
         * Sets the xPos of the object.
         * @param int newXPos - the int to set the new xPos to.
         * @return void
         */        
        //void setXPos(int newXPos);


        /**
         * Sets the yPos of the object.
         * @param int newYPos - the new YPos to set the object's yPos to.
         * @return void
         */ 
        //void setYPos(int newYPos);
        
        
};
#endif
