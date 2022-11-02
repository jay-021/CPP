#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    long double sum = 0, mul;
    cout << endl
        << "The sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Enter the last number: ";
    cin >> n;
    for (int a = 1; a <= n; a++)
    {
        mul = 1 / pow(a, a);
        cout << 1 << "/" << a << "*" << a << "=" << mul << endl;
        sum = sum + mul;
    }
    cout << "The sum of this series is " << sum << endl;
    return 0;
}