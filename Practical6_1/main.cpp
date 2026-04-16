#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Shape
{
protected:
    double radius;
public:
    Shape(double r = 0) : radius(r) {}
    double getRadius() const
    {
        return radius;
    }
};

class Circle : public Shape
{
public:
    Circle(double r = 0) : Shape(r) {}
    double calculateArea() const
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    int count;
    cout << "Enter the number of circles: ";
    cin >> count;

    vector<Circle> dynamicCircles;
    const int MAX_SIZE = 100;
    Circle staticCircles[MAX_SIZE];

    for (int i = 0; i < count; i++)
    {
        double r;
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;

        dynamicCircles.push_back(Circle(r));

        if (i < MAX_SIZE)
        {
            staticCircles[i] = Circle(r);
        }
    }

    cout << "\nID\tRadius\tArea" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << "\t"
             << dynamicCircles[i].getRadius() << "\t"
             << fixed << setprecision(2) << dynamicCircles[i].calculateArea()
             << endl;
    }

    return 0;
}
