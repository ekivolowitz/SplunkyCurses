#include "../hpp/Arrow.hpp"
#include <stdlib.h>


Arrow::Arrow()
{
    yPos = rand()%5 + 35;
    xPos = 75;

    head.x = xPos;
    head.y = yPos;
    head.c = '<';

    body1.x = xPos + 1;
    body1.y = yPos;
    body1.c = '-';

    body2.x = xPos + 2;
    body2.y = yPos;
    body2.c = '-';

    addItemsToDraw("head", head);
    addItemsToDraw("body1", body1);
    addItemsToDraw("body2", body2);
}

int Arrow::getX(){return xPos;}


void Arrow::updatePosition()
{
    std::unordered_map<std::string, Coordinate>& p = getItemsToDraw();


    for(auto it = p.begin(); it != p.end(); ++it)
    {
        ((*it).second).x -= 1;
    }
}

void Arrow::makeNewArrow()
{
    yPos = rand()%5 + 35;
    xPos = rand()%100 + 100;
}
