#include <iostream>
#include <string>
#include <stdio.h>
#include <curses.h>
#include <fstream>


using namespace std;

int main()
{
    /*cout<<endl<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }*/

    int k;
    FILE *fw;
    // FILE *fr;

    cout << "please enter the  number: ";
    cin >> k;

    fw = fopen(" /:\\home\\jayp\\Documents\\c++\\nov22\\txt.txt", "w");
    fprintf(fw, "The entered number is = %d", k);

    fclose(fw);
    // fr = fopen(fw,"");
    // fscanf(fr,"%d",&k);
    // fscanf(fr,"%d",&k);
    // fclose(fr);
    return 0;
}
#include<iostream>
#include<string>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

void bestP(int arr[],int sizeofArr);

int main ()
{
    int n1;
    cin>>n1;
    int arr[n1];
    for(int i=0;i<=n1;i++){
        cin>>arr[i];
    }
    // int n2;
    // cin>>n2;
    // int arr[n2];
    // for(int i=0;i<=n2;i++){
    //     cin>>arr[i];
    // }
    // int n3;
    // cin>>n3;
    // int arr[n3];
    // for(int i=0;i<=n3;i++){
    //     cin>>arr[i];
    // }
    cout<<endl;
    bestP(arr,n1);
    cout<<arr;
    
    return 0;
}

void bestP(int arr[],int sizeofArr){
    sort(arr, arr + sizeofArr);
    // for(int i=0;i<=sizeofArr;i++){
    //     int temp;
    //     if(arr[i]>arr[i+1]){
    //         temp = arr[i];
    //         arr[i] = arr[i+1];
    //         arr[i+1] = temp;
    //         temp = 0;
    //     }
    return;
}
