#include <bits/stdc++.h>


using namespace std;
void takeInputUsingCharArray ();
void takeInputUsingString ();
int main(){
    cout << "This is using character array with getline."<<endl;
    takeInputUsingCharArray ();
    cout <<"This is using string getline"<<endl;
    takeInputUsingString ();

    return 0;
}

void takeInputUsingString (){
    string str {};
    cout<<"Enter your string ";
    getline(cin,str);
    cout<<endl<<str<<endl<<endl;

}

void takeInputUsingCharArray (){
    int x;
    cout << "Enter the size of array ";
    cin >> x;
    char arraY [x];
    cin.ignore();
    cout<<endl<<"Enter the array ";
    cin.getline(arraY,x);
    cin.ignore();
    cout << endl<< "This is your result";
    cout << endl <<"        "<< arraY <<endl<<endl;

}