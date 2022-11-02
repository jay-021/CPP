//Constants, Manipulators & Operator Precedence
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    
    cout<<"\n*********** Constants, Manipulators & Operator Precedence***********"<<endl;
    cout<<"\n*********** Constants ***********"<<endl;
    // Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards.
    const int a = 3.3;
    cout<<"The value of a was : "<<a<<endl;
    //a= 3.2; //It will shows you a error that's why i'm comenting out it.
    cout<<"The value of a after changing it is : "<<a<<endl;

    cout<<"\n*********** Manipulators ***********"<<endl;
    // In C++ programming, language manipulators are used in the formatting of output. 
    // The two most commonly used manipulators are: "endl" and "setw".
    // "endl" is used for the next line.
    // "setw" is used to specify the width of the output.
    int b=1,c=12,d=123,e=1234;
    cout<<"The variable b without setw() : "<<b<<endl;
    cout<<"The variable c without setw() : "<<c<<endl;
    cout<<"The variable d without setw() : "<<d<<endl;
    cout<<"The variable e without setw() : "<<e<<endl;

    cout<<"The variable b with    setw() : "<<setw(4)<<b<<endl; 
    cout<<"The variable c with    setw() : "<<setw(4)<<c<<endl;
    cout<<"The variable d with    setw() : "<<setw(4)<<d<<endl;
    cout<<"The variable e with    setw() : "<<setw(4)<<e<<endl;

    cout<<"\n*********** Operator Precedence & Operator Associativity ***********"<<endl;
    // Operator Precedence shows the priority of operations in multiple operations.
    // Operator associativity helps us to solve an expression; when two or more operators have the same precedence, 

    int f = ((a+b)*(c-d)/e);
    // if you remove this brackets then answer would be diffrent
    cout<<f;
    return 0;
}