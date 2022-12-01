#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
void fact(int strt, int end);

int main()
{
    int n0, n1;
    cout << "Enter the starting number: ";
    cin >> n0;
    cout << "Enter the ending number: ";
    cin >> n1;
    cout<<endl;
    fact(n0, n1);
    return 0;
}
void fact(int strt, int end)
{
    int tot = 1;
    for (int i = strt; i >= end; i--)
    {
        tot = i * tot;
    }
    cout << "Your factorial number is: "
        << "\t" << tot << endl
        << endl;
    return;
}