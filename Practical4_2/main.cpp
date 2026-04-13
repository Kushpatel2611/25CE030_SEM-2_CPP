#include "point.h"

int main()
{
    point p(1, 2);

    p.abc(3, 4);
    p.abc(4, 5);

    p.display();

    cout << endl;

    reset(&p);
    p.display();

    return 0;
}