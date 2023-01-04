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
        cout<<"\n You are underage for buying alcohol "<<endl;
    }
    else if(age==18){
        cout<<"\nYou have to come with some 18+ person"<<endl;
    }
    else {
        cout<<"\nYou'r welcome you can buy it "<<endl;
    }

    cout<<"\n************* Switch-Case Statement ***********"<<endl;

    switch (age)
    {
    case 17:
        cout<<"\n You are underage for buying alcohol "<<endl;
        break;
    
    case 18:
        cout<<"\n You are underage for buying alcohol.you have to wait one more year"<<endl;
        break;
    
    default:
        cout<<"\n You can buy alcohol. "<<endl;
        break;
    }

    return 0;
}