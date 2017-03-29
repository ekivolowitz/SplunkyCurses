#include "../hpp/Graphics.hpp"
#include <string>
using namespace std;


Graphics::Graphics()
{
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);
}


void Graphics::drawGameField()
{
    int mx, my;

    getmaxyx(stdscr, mx, my);
    mvprintw(10, 10, "X: %d", mx);
    mvprintw(11, 10, "Y: %d", my);
    getch();
    refresh();
    endwin();
}
