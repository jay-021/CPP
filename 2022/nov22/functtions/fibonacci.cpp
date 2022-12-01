#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

void fib(int a);

int main()
{
    int n;
    cout << "Enter how many times you want to run this fibonacci sequence: ";
    cin >> n;
    fib(n);
    cout << endl
        << endl;
    return 0;
}
void fib(int a)
{
    int t1 = 0, t2 = 1, sum;
    for (int i = 0; i <= a; i++)
    {
        cout << t1 << " ";
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
}