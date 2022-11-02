#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int i, n, add, cube;
    cout << endl
        << "The cube of the number upto given an integer." << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Enter the  number: ";
    cin >> n;
    cout << endl;
    i = 1;
    while (i <= n)
    {
        cube = i * i * i;
        add += cube;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cube << endl;
        i++;
    }
    cout << endl
        << "The sum of all cubes is: " << add;

    return 0;
}