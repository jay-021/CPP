#include<bits/stdc++.h>
using namespace std;
int main (){

    int total_seconds ;
    cout<<"Enter the seconds: ";
    cin >> total_seconds;
    cout<<endl;


    int hours, minutes, seconds;
    hours = (total_seconds/3600);
    minutes = (total_seconds % 3600)/60;
    seconds = ((total_seconds % 3600)%60);

    cout<<"hours = "<<hours<<endl;
    cout<<"minutes = "<<minutes<<endl;
    cout<<"seconds = "<<seconds;
}