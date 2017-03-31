#include <iostream>
#include "../hpp/Graphics.hpp"
#include "../hpp/Player.hpp"

using namespace std;


int main()
{
    Graphics g;
    
    Player p(20,20);


    g.drawGameField();
    g.drawObject(p);
    g.endWindow(); 
    return 0;
}
