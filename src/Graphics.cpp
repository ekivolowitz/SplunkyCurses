#include "../hpp/Graphics.hpp"
#include <string>
#include <unistd.h>

using namespace std;

/**
 * Basic constructor for the graphics object.
 * Does not need to return anything as curses is initiated.
 */

Graphics::Graphics()
{    
    //Basic commands to initialize ncurses properly.
    //initscr() begins curses mode.
    initscr();
    
    getmaxyx(stdscr, maxY, maxX);
    mainPathYLevel = 2 * (maxY / 3);
    cbreak();
    //Removes the cursor from the screen.
    curs_set(0);
    //Allows for raw text (which lets us use the arrow keys
    raw();
    //Does not repeat back to the screen what the user enters
    //unless directly told to.
    noecho();
    //Instantiates the keyboard as an object that can send text through stdin
    keypad(stdscr, TRUE);
}

/**
 * Sets up the initial game field for the user.
 */
void Graphics::drawGameField()
{
    //max x coordinate and y coordinate copies.
    int currX = maxX;
    int currY = maxY;
    
    //Draws the floor.
    while(currX > 0)
    {
        mvaddch(mainPathYLevel, currX, '-');
        currX--;
    }

    //Must be run to tell curses that everything its supposed to draw should be moved
    //to the screen.
    refresh();
}

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
void Graphics::drawObject(Object& e)
{
    // if(e.getXPos() == 10 && e.getYPos() == 10)
    // {
    //     e.setYPos(mainPathYLevel - 3);
    //     e.setXPos(10);
    //     e.updatePlayerPosition();
    // }
    unordered_map<string, Coordinate> drawing = e.getItemsToDraw();

    for(auto it = drawing.begin(); it != drawing.end(); ++it)
    {
        mvaddch((*it).second.y, (*it).second.x, (*it).second.c);
    }
    refresh();
}


void Graphics::eraseObject(Object& e)
{
    unordered_map<string, Coordinate> drawing = e.getItemsToDraw();
    for(auto it = drawing.begin(); it != drawing.end(); ++it)
    {
       mvdelch((*it).second.y, (*it).second.x); 
    }
    refresh();
}

int Graphics::getMovementInput()
{
    return getch();
}



/**
 * This function ends the window when called. It is used in one place, and that is at the end of
 * the main.cpp's main function. It will ask the user for a character, and no matter what
 * they press, it will then end the curses session.
 */
void Graphics::endWindow()
{
    endwin();
}
