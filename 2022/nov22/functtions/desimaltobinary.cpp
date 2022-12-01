#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int destobi(int n);

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    cout << endl
        << num
        << " --->> ";
    cout << destobi(num);
    cout << endl
        << endl;
    return 0;
}

int destobi(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}