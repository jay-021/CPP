#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int  destooct(int n);

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    cout << endl
        << num
        << " --->> ";
    cout<<destooct(num);
    cout << endl
        << endl;
    return 0;
}



int destooct(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}