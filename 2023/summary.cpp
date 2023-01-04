#include<bits/stdc++.h>

using namespace std;

int main ()
{
    // taking input using getline with char array or string
    char arr [1000] ;
    cin.getline(arr,1000);
    cout<<arr<<endl;

    // taking input using getline with string
    string str {};
    getline(cin,str);
    cout<<"\v"<<str<<endl;

    /* difference between local and global variable. global variable outside of main function and local inside any function
    you can use :: scope resolution operator to access global variable in local function just like this
    cout<<::variableName; */

    /* cpp always take input of real numbers as a double. 
    so if we want to change it we should have to define that using f or l
    float d = 3.4F;
    long double e = 3.4L; */

    // convert one data type to other , typecast a variable, either using "(float)var" or using "float(var)". 

    /* Constants are unchangeable; when a constant variable is initialized in a program, its value cannot be changed afterwards.
    const int a = 3.3; */

    /* In C++ programming, language manipulators are used in the formatting of output. 
    The two most commonly used manipulators are: "endl" and "setw".
    "endl" is used for the next line.
    "setw" is used to specify the width of the output. */

    /* proper way to use scanf and printf
    scanf() with three inputs
    printf("\n Third scanf() returns : %d",
                  scanf("%s%s%s", a, b, c)); */

    /* 
    proper way to define function
    Return_type Function_name (Parameters)
    {
        Function Body
    } */

    //    cout << "Size of short int : " << sizeof(short int) << endl; // find the size of variables

    /* typedef Declarations
    You can create a new name for an existing type using typedef. 
    Following is the simple syntax to define a new type using typedef −

    typedef type newname;  
    ex.
    typedef int feet;
    feet distance;
    */

    
    return 0;
}