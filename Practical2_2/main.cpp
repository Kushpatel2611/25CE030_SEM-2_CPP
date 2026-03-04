#include <iostream>
#include "Students.h"

using namespace std;

bool doesStudentExist(Students arr[], int size, int searchRoll) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i].getRoll() == searchRoll) 
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Students s1;
    Students s2(1, "Kush Godhaviya", 75, 90, 100);
    Students s3(2, "Khush Patel");

    cout << "\n--- Student Records ---";
    s1.display();
    s2.display();
    s3.display();

    Students school[] = {s1, s2, s3};
    int search = 1;

    if (doesStudentExist(school, 3, search)) 
    {
        cout << "\nSuccess: Student with Roll " << search << " found in database.";
    } 
    else 
    {
        cout << "\nError: Student not found.";
    }

    return 0;
}
