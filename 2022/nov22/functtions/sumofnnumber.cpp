#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
void sumOfn(int n);
int main()
{
    cout << "Enter the last number; ";
    int n;
    cin >> n;
    sumOfn(n);
    return 0;
}
void sumOfn(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return;
}