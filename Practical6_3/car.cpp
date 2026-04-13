#include "car.h"

fuel::fuel()
{
    cout << "enter type of fuel:";
    cin >> type;
}

brand::brand()
{
    cout << "enter model of the vehicle:";
    cin >> model;

    cout << "enter brand name of the vehicle:";
    cin >> brandname;
}

void car::display()
{
    cout << "type: " << type << endl;
    cout << "model: " << model << endl;
    cout << "brandname: " << brandname << endl;
}