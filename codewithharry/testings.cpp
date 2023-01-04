#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int a ;
    cout<<"Enter the value for pyramid : ";
    cin>>a;
    cout<<endl;
    for ( int i = 1; i < a ; i++)
    {
        cout<<i;
        for (int j = i-1; j>0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for (a ; a>0;a--)
    {
        cout<<a;
        for (int j = a-1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}