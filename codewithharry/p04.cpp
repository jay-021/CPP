#include<iostream>
using namespace std;
int main ()
{
    // This is the introduction to operators
    int a,b;
    cout<<"Enter the both values : "<<endl;
    cin>>a>>b;
    //first we type arithmatic operators
    cout<<"This is the result of operation a+b :"<<a+b<<endl;
    cout<<"This is the result of operation a-b :"<<a-b<<endl;
    cout<<"This is the result of operation a*b :"<<a*b<<endl;
    cout<<"This is the result of operation a/b :"<<a/b<<endl;
    cout<<"This is the result of operation a%b :"<<a % b<<endl;
    cout<<"This is the result of operation a++ :"<<a++<<endl;
    cout<<"This is the result of operation a-- :"<<a--<<endl;
    cout<<"This is the result of operation ++a :"<<++a<<endl;
    cout<<"This is the result of operation --a :"<<--a<<endl;

//     Assignment Operators
// Assignment operators are used for assigning values to variables. For example: int a = 10, b = 5;

// Comparison Operators
// Comparison operators are used for comparing two values. Examples of comparison operators are here.

    cout<<"\nFollowing are the Comparision operators"<<endl;
    cout<<"The value of operation a==b is : "<<(a==b)<<endl;
    cout<<"The value of operation a!=b is : "<<(a!=b)<<endl;
    cout<<"The value of operation a<b is : "<<(a<b)<<endl;
    cout<<"The value of operation a>b is : "<<(a>b)<<endl;
    cout<<"The value of operation a<=b is : "<<(a<=b)<<endl;
    cout<<"The value of operation a>=b is : "<<(a>=b)<<endl;
    
    // Logical Operators
    // Logical operators are used for comparing two expressions. 
    // For example ((a==b) && (a>b)). More examples of logical operators are here.

    cout<<"\nFollowing are the Logical operators"<<endl;
    cout<<"The value of operation (a==b)&&(a<b) is : "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of operation (a==b)||(a<b) is : "<<((a==b)||(a<b))<<endl;
    cout<<"The value of operation !(a==b) is : "<<(!(a==b))<<endl;
    

    return 0;
}
