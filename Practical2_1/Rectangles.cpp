#include "Rectangles.h"
#include <iostream>
using namespace std;

void Rectangles::setplotid(int pid) { plotid = pid; }
void Rectangles::setlength(float l) { length = l; }
void Rectangles::setbreadth(float b) { breadth = b; }
int Rectangles::getplotid() { return plotid; }

int Rectangles::viewdetails(int tempid) 
{
    if (plotid == tempid) 
    {
        cout << "Plot ID : " << plotid << endl;
        cout << "Perimeter : " << 2.0 * (length + breadth) << endl;
        cout << "Area : " << (length * breadth) << endl;
        cout << "\n";
        return 1;
    }
    return 0;
}

int Rectangles::updatedimensions(int tempid) 
{
    if (tempid == plotid) 
    {
        float ul, ub;
        cout << "Enter new length : ";
        cin >> ul;
        cout << "Enter new breadth : ";
        cin >> ub;

        length = ul;
        breadth = ub;
        cout << "Dimensions updated successfully!" << endl;
        return 1;
    }
    return 0;
}
