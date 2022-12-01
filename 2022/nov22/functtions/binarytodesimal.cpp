#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int bitodes(int n);

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    cout << endl
        << num
        << " --->> ";
    cout<<bitodes(num);
    cout << endl
        << endl;
    return 0;
}



int bitodes(int n)
{
    int a = 1;
    int sum = 0;
    while (n != 0)
    {
        sum = sum + (a * (n % 10));
        n=n/10;
        a = a * 2;
    }
    return sum;
}