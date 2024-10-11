#ifndef POINT_H
#define POINT_H

class point
{
public:
    point();
    point(int x,int y);
    void set_x(int x);
    void set_y(int y);
    int get_x();
    int get_y();
protected:
    int _x;
    int _y;

};

#endif // POINT_H
