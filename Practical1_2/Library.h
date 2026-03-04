#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>

class Library 
{
private:
    int bookid;
    char booktitle[100];
    char bookauthor[100];
    int bookstock;

public:
    void addbook();
    int bookdetails(int searchID);
    int issuebook(int searchID);
    int returnbook(int searchID);
    void displayallbooks();

    int getBookID();
};

#endif

