#include <iostream>
#include "../hpp/Graphics.hpp"
#include "../hpp/Player.hpp"
#include "../hpp/Coordinate.hpp"
#include <unordered_map>
using namespace std;


int main()
{
    Graphics g;
    
    Player p(25,25);
    // Object e(25,25);
    // unordered_map<string, Coordinate> v = p.getItemsToDraw();

    // for(auto it = v.begin(); it != v.end(); ++it)
    // {
    // 	cout << (*it).second.x << endl;
    // }


    g.drawGameField();
    g.drawObject(p);
    int x = -2;
    while(1)
    {
        int ch = g.getMovementInput();
        if(ch == 'q')
        {
            break;
        }
        else
        {
            g.eraseObject(p);
            p.updatePlayerPosition(ch);
            g.drawObject(p);
        }
    }
    g.endWindow(); 
    return 0;
}
