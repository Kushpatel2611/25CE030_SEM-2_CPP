#include "person.h"

int main()
{
    int idd, x = 0;

    manager m[5];

    cout << "enter id:";
    cin >> idd;

    for (int i = 0; i < 5; i++)
    {
        if (m[i].metch() == idd)
        {
            m[i].display();
            x = 1;
        }
    }

    if (x == 0)
    {
        cout << "not valid id";
    }

    return 0;
}