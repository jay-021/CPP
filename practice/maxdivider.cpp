#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, c;
    int max = 0, temp = 0;
    int max1 = 0, temp1 = 0;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> c;
    for (int b = 1; a > b; b++)
    {
        if (a % b == 0)
        {
            temp = b;
            if (temp > max)
            {
                max = temp;
            }
        }
    }
    cout << max << endl;
    for (int i = 1; c > i; i++)
    {
        if (c % i == 0)
        {
            temp1 = i;
            if (temp1 > max1)
            {
                max1 = temp1;
            }
        }
    }
    cout << max1 << endl;
    return 0;
}