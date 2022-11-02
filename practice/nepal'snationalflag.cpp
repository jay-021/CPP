#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n, i, j;
    int sum = 0, add;
    cout << endl
         << " Nepal's national flag * character" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Enter the  number: ";
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}