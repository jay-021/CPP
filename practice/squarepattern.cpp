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
         << "square pattern with * character" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Enter the  number: ";
    cin >> n;
    cout << endl
        << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}