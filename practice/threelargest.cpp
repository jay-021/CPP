#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void largest_from_three(int ary[], int ary_size)
{
    int first, second, third, a;
    if (ary_size < 3)
    {
        cout << endl
            << "Invalid input enter more than 3 elements" << endl;
    }
    first = second = third;
    for (a = 0; a < ary_size; a++)
    {
        if (ary[a] > first)
        {
            third = second;
            second = first;
            first = ary[a];
        }
        else if (ary[a] > second)
        {
            third = second;
            second = ary[a];
        }
        else if (ary[a] > third)
        {
            third = ary[a];
        }
    }
    cout << endl
        << "the three biggest element of array is: " << first << " <- " << second << " <- " << third;
}

int main()
{
    int n, i;
    cout << ":Three largest elements in array:\n----------------------------------------" << endl;
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
    largest_from_three(arr, n);

    return 0;
}
