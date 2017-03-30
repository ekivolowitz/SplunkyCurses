#ifndef FINAL_GRAPHICS_HPP
#define FINAL_GRAPHICS_HPP

#include <ncurses.h>
#include <iostream>
#include <iterator>
#include "../hpp/Object.hpp"

class Graphics {
    public:

    	/**
         * Basic constructor for the graphics object.
         * Does not need to return anything as curses is initiated.
         */
        Graphics();
        
        /**
         * Sets up the initial game field for the user.
         */
        void drawGameField();
        
        /**
         * This function takes an Object or a subclass of Object and writes it to the screen.
         * The important thing to note is that every object has a vector of pairs<char, <int xcoord, int ycoord>>
         * This is attached to the Object, and can be called using the getItemsToDraw() method.
         * This function iterates through all of the pairs and writes them to the screen. 
         * It doesn't matter what kind of object is passed, because this functions on the superclass.
                 * 
         * @param Object& e - the object to be drawn.
         * @return void
         */
        void drawObject(Object& e);
        
        /**
         * This function ends the window when called. It is used in one place, and that is at the end of
         * the main.cpp's main function. It will ask the user for a character, and no matter what
         * they press, it will then end the curses session.
         */
        void endWindow();
    private:

};


#endif
