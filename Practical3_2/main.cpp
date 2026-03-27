#include <iostream>
#include <vector>
#include <chrono>
#include "Calculator.h"

using namespace std;
using namespace std::chrono;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = 50 + i;
    }

    // Iterative

    auto startIter = high_resolution_clock::now();
    long long iterResult = Calculator::calculateIterative(arr);
    auto stopIter = high_resolution_clock::now();
    auto iterDuration = duration_cast<microseconds>(stopIter - startIter);

    // Recursive

    auto startRec = high_resolution_clock::now();
    long long recResult = 0;
    bool skipped = (n > 10000);

    if (!skipped)
    {
        recResult = Calculator::calculateRecursive(arr, n);
    }
    auto stopRec = high_resolution_clock::now();
    auto recDuration = duration_cast<microseconds>(stopRec - startRec);

    // Results

    cout << "Iterative Sum: " << iterResult << " | Time: " << iterDuration.count() << " us" << endl;

    if (skipped)
    {
        cout << "Recursive Sum: Skipped (Size too large to prevent Stack Overflow)" << endl;
    }
    else
    {
        cout << "Recursive Sum: " << recResult << " | Time: " << recDuration.count() << " us" << endl;
    }

    return 0;
}