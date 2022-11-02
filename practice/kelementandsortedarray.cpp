#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void largest_from_three(int ary[], int ary_size, int element_number)
{
    int a, b, temp, c = 0;
    if (ary_size < 3)
    {
        cout << endl
            << "Invalid input enter more than 3 elements" << endl;
    }

    for(a=0;a<ary_size-1;a++){
        if(ary[a]<ary[a+1]){
            temp = ary[a];
            ary[a]=ary[a+1];
            ary[a+1]=temp;
            a=-1;
        }
    }
    cout<<endl<<"Your element k is: "<<ary[element_number-1]<<endl;

    cout << endl<<"Sorted array  (";
    while (c < ary_size)
    {

        cout << ary[c]<<",";
        c++;
    }
    cout<<")";

}

int main()
{
    int n, i, k;
    cout << ":Three largest k elements in array and sorted array:\n----------------------------------------" << endl;
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
    cout << endl
        << "Which k element you want to find: ";
    cin >> k;
    largest_from_three(arr, n, k);

    return 0;
}
