#include <iostream>
#include <string>
// #include<stdio.h>
#include <cstdio>

using namespace std;

int main()
{
    int num1, num2;
    int gcd;
    cout << "Enter the first number: \t";
    cin >> num1;
    cout << endl;
    cout << "Enter the second number: \t";
    cin >> num2;
    cout << endl;
    for (int i = 1; num1 > i && num2 > i; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "The greatest common number GCD is: " << gcd;
    return 0;
}