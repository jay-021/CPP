#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int sum = 0, tsum;
    cout << endl
        << "The series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Enter the last number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        tsum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
            tsum += j;
            cout << j;
            if (j < i)
            {
                cout << "+";
            }
        }
        cout << " = " << tsum << endl;
    }
    cout << endl
        << "The sum of the above series is: " << sum << endl;
    return 0;
}