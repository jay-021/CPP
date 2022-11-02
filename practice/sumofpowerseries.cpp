#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int sum = 0, mul;
    cout << endl
        << "The sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)." << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Enter the last number: ";
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        mul = a * a;
        cout << a << "*" << a << "=" << mul << endl;
        sum = sum + mul;
    }
    cout << "The sum of this series is " << sum << endl;
    return 0;
}