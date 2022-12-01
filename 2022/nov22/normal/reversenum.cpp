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
    int reverse = 0;

    while (n > 0)
    {
        int last;
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }
    cout
        << reverse<<endl;

    return 0;
}