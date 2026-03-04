#include <iostream>
#include "Rectangles.h"
using namespace std;

int main() 
{
    Rectangles plot[50];
    int ch, tempid;
    int plotcount = 0;

M:
    cout << "1. Add a plot. \n2. Update dimensions. \n3. View Area and Perimeter.\n";
    cout << "4. Exit" << endl;
    cout << "Enter a choice : ";
    cin >> ch;

    switch (ch) 
    {
    case 1:
        float l, b;
        cout << "Enter Plot ID : ";
        cin >> tempid;

        for(int i = 0; i < plotcount; i++) 
        {
            if(plot[i].getplotid() == tempid) 
            {
                cout << "Error: Plot ID already exists!" << endl;
                goto M;
            }
        }

        plot[plotcount].setplotid(tempid);
        cout << "Enter length for the plot : ";
        cin >> l;
        plot[plotcount].setlength(l);
        cout << "Enter breadth for the plot : ";
        cin >> b;
        plot[plotcount].setbreadth(b);
        cout << "Plot added successfully!" << endl;
        plotcount++;
        goto M;

    case 2:
        cout << "Enter Plot ID : ";
        cin >> tempid;
        int i;
        for (i = 0; i < plotcount; i++) 
        {
            if (plot[i].updatedimensions(tempid) == 1) 
            {
                break;
            }
        }
        if (i == plotcount) 
        {
            cout << "No plot exists with this ID!" << endl;
        }
        goto M;

    case 3:
        cout << "Enter Plot ID : ";
        cin >> tempid;
        for (i = 0; i < plotcount; i++) 
        {
            if (plot[i].viewdetails(tempid) == 1) 
            {
                break;
            }
        }
        if (i == plotcount) 
        {
            cout << "No plot exists with this ID!" << endl;
        }
        goto M;

    case 4:
        cout << "Thanks for using our service! Have a nice day" << endl;
        break;

    default:
        cout << "Please enter a valid choice!" << endl;
        goto M;
    }

    return 0;
}
