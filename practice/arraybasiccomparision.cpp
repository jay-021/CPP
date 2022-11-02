#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i, j;
    cout << "Compare all elements in array\n----------------------------------------" << endl;
    cout << "Enter the number how big you want to make array: ";
    cin >> n;
    int arr[n];
    cout << endl;
    cout << "Enter all values in array!" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
        << "The array is down here" << endl;
    cout << "(";
    for (i = 0; i < n; i++)
    {
        cout << "," << arr[i];
    }

    cout << ")";
    cout << endl;

    int temp = arr[0];
    for (i = 0; i < n; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    cout << "The biggest element in the array is: " << temp;
    return 0;
}
