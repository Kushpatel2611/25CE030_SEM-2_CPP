#include "Library.h"
#include <iostream>
using namespace std;

void Library::addbook() 
{
    cout << "Enter book's ID : ";
    cin >> bookid;
    cout << "Enter book's Title : ";
    cin >> booktitle;
    cout << "Enter book's Author : ";
    cin >> bookauthor;
    cout << "Enter book's quantity : ";
    cin >> bookstock;

    cout << "Book added successfully!" << endl << "\n\n";
}

int Library::getBookID() 
{
    return bookid;
}

int Library::bookdetails(int searchID) 
{
    if (searchID == bookid) 
    {
        cout << "Book ID : " << bookid << endl;
        cout << "Book Title : " << booktitle << endl;
        cout << "Book Author : " << bookauthor << endl;
        cout << "Available currently : " << bookstock << endl;
        cout << "\n\n";
        return 1;
    }
    return 0;
}

int Library::issuebook(int searchID) 
{
    if (searchID == bookid) 
    {
        if (bookstock >= 1) 
        {
            bookstock--;
            cout << "Book issued successfully." << endl;
        } else 
        {
            cout << "Sorry ! But currently this book is out of stock." << endl;
        }
        return 1;
    }
    return 0;
}

int Library::returnbook(int searchID) 
{
    if (searchID == bookid) 
    {
        cout << "Book returned successfully!" << endl;
        bookstock++;
        return 1;
    }
    return 0;
}

void Library::displayallbooks() 
{
    cout << " Book ID : " << bookid << endl;
    cout << " Book Title : " << booktitle << endl;
    cout << " Book Author : " << bookauthor << endl;
    cout << " Book Stock : " << bookstock << endl;
    cout << "\n\n";
}
