
#include<iostream>
using namespace std;
// this is a global variable
int glo=6;

void sum() { 
    int a;
    // here it can print global variable because there is no local variable 
    cout<<"This is global variable: "<<glo;
    bool duck = false;
    cout<<"\nThis is bool " <<duck<<endl;
    }
int main ()
{
    // this is a introduction of  variables and datatype in cpp
    int a=3 ,b=2 ;
    float c=3.14;
    int glo = 45; //this glo is local variable
    double pi = 3.149999;
    cout<<"a and b is a int variable and the value of a is : "<< a << "\nThe value of variable b is : "<<b;
    cout<<"\nThe value of pi is : "<<pi ;
    cout<<"\nThe value of glo as local variable is is : "<<glo<<endl;
    sum();
    return 0;

}
