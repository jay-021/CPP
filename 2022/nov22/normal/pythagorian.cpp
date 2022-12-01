#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <curses.h>

using namespace std;

bool pythago(int a, int b, int c);

int main()
{
    cout << "Enter three values: ";
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b || a < c)
    {
        if (b < c)
        {
            a = c;
        }
        else
        {
            a = b;
        }
    }
    else
    {
        a = a;
    }

    if (pythago(a, b, c))
    {
        cout << endl
            << "Your triplet is pythagorian." << endl;
    }
    else
    {
        cout << endl
            << "Your triplet is not pythagorian." << endl;
    }
    return 0;
}

bool pythago(int a, int b, int c)
{
    if (a * a == (b * b) + (c * c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}