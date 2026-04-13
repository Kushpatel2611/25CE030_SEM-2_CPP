#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    Point& move(int dx, int dy) {
        this->x += dx;
        this->y += dy;
        return *this;
    }

    void shiftTo(int newX, int newY) {
        this->x = newX;
        this->y = newY;
    }

    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }

    void display() {
        cout << "Point Coordinates: (" << x << ", " << y << ")\n";
    }

    friend void resetPoint(Point* p);
};

void resetPoint(Point* p) {
    p->x = 0;
    p->y = 0;
}

void updatePoint(Point* p, int dx, int dy) {
    p->move(dx, dy);
}

int main() {
    Point p(2, 3);

    cout << "Initial Point:\n";
    p.display();

    p.move(2, 3).move(-1, 4).move(5, -2);

    cout << "After chained moves:\n";
    p.display();

    updatePoint(&p, 1, 1);

    cout << "After pointer update:\n";
    p.display();

    cout << "Distance from origin: " << p.distanceFromOrigin() << endl;

    resetPoint(&p);

    cout << "After reset:\n";
    p.display();

    return 0;
}
