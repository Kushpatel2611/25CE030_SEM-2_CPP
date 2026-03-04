#include <iostream>
#include "Library.h"
using namespace std;

int main() 
{
    Library books[100];
    int bookcount = 0; 
    int ch = 0;
    int tempid; 

M:
    cout << "1.Add a book." << endl;
    cout << "2.View book details." << endl;
    cout << "3.Issue a book." << endl;
    cout << "4.Return a book." << endl;
    cout << "5.Display all book." << endl;
    cout << "6.Exit." << endl;
    cout << "\nEnter choice : ";
    cin >> ch;

    switch (ch) 
    {
    case 1:
        if (bookcount < 100) 
        {
            books[bookcount].addbook();
            bookcount++;
        } else 
        {
            cout << "Library full!" << endl;
        }
        goto M;

    case 2:
        cout << "Enter book ID : ";
        cin >> tempid;
        int i;
        for (i = 0; i < bookcount; i++) 
        {
            if (books[i].bookdetails(tempid) == 1) break;
        }
        if (i == bookcount) cout << "There does not exist any book by this ID!" << endl;
        goto M;

    case 3:
        cout << "Enter book Id : ";
        cin >> tempid;
        for (i = 0; i < bookcount; i++) 
        {
            if (books[i].issuebook(tempid) == 1) break;
        }
        if (i == bookcount) cout << "There is no book with this ID!" << endl;
        goto M;

    case 4:
        cout << "Enter book ID : ";
        cin >> tempid;
        for (i = 0; i < bookcount; i++) 
        {
            if (books[i].returnbook(tempid) == 1) break;
        }
        if (i == bookcount) cout << "No book exists with this ID!" << endl;
        goto M;

    case 5:
        if (bookcount == 0) 
        {
            cout << "No data found! Please add some books." << endl;
        } else 
        {
            for (i = 0; i < bookcount; i++) 
            {
                cout << i + 1 << ") ";
                books[i].displayallbooks();
            }
        }
        goto M;

    case 6:
        cout << "Please visit us again, have a nice day!" << endl;
        break;

    default:
        cout << "Please enter a valid choice!." << endl;
        goto M;
    }
    return 0;
}
