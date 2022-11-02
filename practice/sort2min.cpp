#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>

using namespace std;

void sort2min(int aray[], int size)
{
    int a, b;
    sort(aray, aray + size);
    for (a = 0; a < size; a++)
    {
        cout << aray[a] << " ";
    }
    printf("This is your sorted array.");
}

int main()
{
    int j;
    int n;
    cout << "\nEnter the size of array: ";
    cin >> n;
    int arr[n];
    cout << endl;
    cout << "Enter the values in array: ";
    for (j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    cout << "This is your unsorted array: (";
    for (j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << ")" << endl
        << endl;
    sort2min(arr, n);
    return 0;
}