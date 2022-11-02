#include<iomanip>
#include<iostream>
using namespace std;
int main ()
{
    cout<<"\n************* Control Structures, If Else and Switch-Case Statement ***********"<<endl;
    cout<<"\n************* Control Structures -->> If Else  ***********"<<endl;


    int age ;
    cout<<"\nEnter your age : "<<setw(4);
    cin>>age;
    if (age<18){
        cout<<"\n You are underage for buying alchol "<<endl;
    }
    else if(age==18){
        cout<<"\nYou have to come with some 18+ persosn"<<endl;
    }
    else {
        cout<<"\nYou'r welcome you can buy it "<<endl;
    }

    cout<<"\n************* Switch-Case Statement ***********"<<endl;

    switch (age)
    {
    case 17:
        cout<<"\n You are underage for buying alchol "<<endl;
        break;
    
    case 18:
        cout<<"\n You are underage for buying alchol.you have to wait one more year"<<endl;
        break;
    
    default:
        cout<<"\n You can buy alch. "<<endl;
        break;
    }

    return 0;
}