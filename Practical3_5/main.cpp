#include <iostream>
#include <string>
using namespace std;

int superDigit(long long num)
{
    if (num < 10)
        return num;

    long long sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return superDigit(sum);
}

int main()
{
    string n;
    int k;

    cout << "Enter number as string: ";
    cin >> n;

    cout << "Enter value of k: ";
    cin >> k;

    long long initialSum = 0;

    for (char digit : n)
    {
        initialSum += digit - '0';
    }

    initialSum *= k;

    int result = superDigit(initialSum);

    cout << "Super Digit = " << result << endl;

    return 0;
}
