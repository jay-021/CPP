// Reference Variables & Typecasting
#include<iostream>
using namespace std;
int c = 33;
int main ()
{
    int a=3 ,b=3,c;
    cout<<"\n****************Global variable call using :: ****************"<<endl;
    cout<<"If we type normal c it can results normal values " << endl;
    c=a+b;
    cout<<"The local c variable is : "<<c<<endl;
    cout<<"Now let's try to print global c with ::  result is  : "<<::c<<endl;
    // access the value of the global variable "c," we use scope resolution operator "::" with the "c" variable. 

    cout<<"\n************* Float, double and long double Literals****************"<<endl;
    // cpp always take input of real numbers as a double. 
    // so if we want to change it we should have to define that using f or l
    float d = 3.4F;
    long double e = 3.4L;
    cout<<"The size of float 3.4 is : "<<sizeof(3.4)<<endl;
    cout<<"The size of float 3.4f is : "<<sizeof(3.4f)<<endl;
    cout<<"The size of float 3.4F is : "<<sizeof(3.4F)<<endl;
    cout<<"The size of float 3.4l is : "<<sizeof(3.4l)<<endl;
    cout<<"The size of float 3.4L is : "<<sizeof(3.4L)<<endl;
    cout<<"The value of d is : "<<d<<endl;
    cout<<"The value of e is : "<<e<<endl;

    // Reference Variable
    // Reference variables can be defined as another name for an already existing variable. 
    int x = 3;
    int & y = x;
    cout<<"\n************* Reference Variable ****************"<<endl;
    cout<<"The value of x is : "<<x<<endl;
    cout<<"The value of y is : "<<y<<endl;

    // *************Typecasting**************** 
    // Typecasting can be defined as converting one data type into another 
    // there are two ways to typecast a variable, either using "(float)var" or using "float(var)". 
    cout<<"\n*************Typecasting**************** "<<endl;
    int j = 3;
    float k = 3.3;
    cout<<"The value of normal j is : "<<j<<endl;
    cout<<"The value of float j is : "<<(float)j<<endl;
    cout<<"The value of float j is : "<<float(j)<<endl;

    cout<<"The value of normal k is : "<<j<<endl;
    cout<<"The value of  int k is : "<<(int)k<<endl;
    cout<<"The value of  int k is : "<<int(k)<<endl;

    cout<<"The expression is "<<j+k<<endl;
    cout<<"The expression is "<<j+(int)k<<endl;
    cout<<"The expression is "<<j+int(k)<<endl;
    return 0;

}

