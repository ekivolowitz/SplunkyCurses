#include <iostream>
#include <chrono>
#include <thread>
#include "../hpp/Graphics.hpp"
#include "../hpp/Player.hpp"
#include "../hpp/Coordinate.hpp"
#include "../hpp/Arrow.hpp"
#include <unordered_map>
#include <thread>

using namespace std;


void everyThingElse()
{

}

void character()
{

}

int main()
{
    Graphics g;
    
    Player p(25,36);
    Arrow a;
    g.drawGameField();
    g.drawObject(p);
    g.drawObject(a);
    int x = -2;
    while(1)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(25));
        if(a.getX() > 0)
        {
            g.eraseObject(a);
            a.updatePosition();
            g.drawObject(a);
        }
        else
        {   
            g.eraseObject(a);
            a.makeNewArrow();
        }
        int ch = g.getMovementInput();
        if(ch == 'q')
        {
            break;
        }
        else if(ch == 'w')
        {
            for(int x = 0; x < 3; ++x)
            {
                g.eraseObject(p);
                p.updatePosition(ch);
                g.drawObject(p);
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
            for(int x = 0; x < 3; ++x)
            {
                g.eraseObject(p);
                p.updatePosition('s');
                g.drawObject(p);
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }
        else
        {
            g.eraseObject(p);
            p.updatePosition(ch);
            g.drawObject(p);
        }
    }
    g.endWindow(); 
    return 0;
}
