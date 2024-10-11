#include "point.h"

point::point()
{
    _x = 0;
    _y = 0;
}
point::point(int x, int y)
{
    _x = x;
    _y = y;
}

void point::set_x(int x)
{
    _x = x;
}

void point::set_y(int y)
{
    _y = y;
}

int point::get_x(){return _x;}

int point::get_y() {return _y;}


