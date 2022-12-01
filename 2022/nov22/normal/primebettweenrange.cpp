#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;
bool isPrime(int a);

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << endl
        << "Enter second number: ";
    cin >> b;
    cout << endl;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl
        << endl;
    return 0;
}
bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}