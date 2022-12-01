#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int octtodes(int n);

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    cout << endl
        << num
        << " --->> ";
    cout<< octtodes(num);
    cout << endl
        << endl;
    return 0;
}



int octtodes(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}