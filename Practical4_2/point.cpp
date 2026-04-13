#include "point.h"

point::point(int a, int b)
{
    x = a;
    y = b;
}

point& point::abc(int dx, int dy)
{
    x += dx;
    y += dy;

    return *this;
}

void point::display()
{
    cout << "(" << x << "," << y << ")" << endl;
    cout << sqrt(x * x + y * y);
}

void reset(point *p)
{
    p->x = 0;
    p->y = 0;
}