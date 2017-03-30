#include <iostream>
#include "../hpp/Graphics.hpp"
#include "../hpp/Player.hpp"

using namespace std;


int main()
{
    std::cout << "Hello World" << std::endl;
    Graphics g;
    
    Object o(25,25);
    
    g.drawGameField();
    g.drawObject(o);
    g.endWindow(); 
    return 0;
}
