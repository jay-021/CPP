#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main ()
{
    cout<<"\n*********** For, While and do-while loops *************"<<endl;
    cout<<"\n***********  For  loops *************"<<endl;
    int i,sum=0;
    for (i=1;i<10;i++)
    {
        cout<<"\t\t"<<i<<endl;
        cout<<"lets sum the first ten numbers\t";
        sum=sum+i;
        cout<<sum;
    }

    cout<<"\n***********  While  loops *************"<<endl;
    int j=10 ;
    while(j>1)
    {
        cout<<j<<endl;
        --j;
    }
    return 0;
}