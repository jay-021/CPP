
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "\n\nThe sum of entered number\n";
    cout << "-------------------------------\n";
    cout << "Enter the number you want to find sum: ";
    int num1, num2, r, sum;
    cin >> num1;
    num2 = num1;
    while (num1 > 0)
    {
        r = num1 % 10;
        num1 = num1 / 10;
        sum = sum + r;
    }
    cout << endl
        << "The sum of " << num2 << " is " << sum;
    return 0;
}