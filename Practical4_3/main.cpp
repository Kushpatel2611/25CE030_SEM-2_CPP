#include "merge.h"

int main()
{
    int n, m;

    cout << "enter number n:";
    cin >> n;

    cout << "enter number m:";
    cin >> m;

    int *a = new int[n];
    int *b = new int[m];
    int *c = new int[n + m];

    cout << "enter array a:";
    inputArray(a, n);

    cout << "enter array b:";
    inputArray(b, m);

    mergeArray(a, b, c, n, m);

    cout << "merged array: ";
    displayArray(c, n + m);

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}