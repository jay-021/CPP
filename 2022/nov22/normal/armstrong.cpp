#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n;
    cout << endl
        << "Enter the  number: \n";
    cin >> n;
    i = n;
    int armstrong = 0;
    /* armstrong number ex. 153 if you calculate the cube sum of each digit in 
    last it became original number 
    1 cube is 1 
    3 cube is 9
    5 cube is 125
    so sum of 1 ,9 and 125 is again 153
    that is armstrong number */

    while (n > 0)
    {
        int last;

        last = n % 10;
        last = last * last * last;
        armstrong = armstrong + last;
        n = n / 10;
    }
    if (armstrong == i)
    {
        cout << "\nYour number "
            << armstrong << " is armstrong" << endl;
    }
    else
    {
        cout << "\nYour number is not armstrong.\n";
    }

    return 0;
}