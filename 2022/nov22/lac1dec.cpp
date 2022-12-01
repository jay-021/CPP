// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <curses.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    srand(time(0));
    /* int k;
    k = rand();
    cout<<"First result  " << k%11 << endl;
    k = rand ();
    cout <<"second result  "<< k%11 << endl; */

    int nm1, nm2, temp;
    int cards[32];

    for (int i = 0; i < 32; i++)
    {
        cards[i] = i;
    }
    for (int i = 0; i < 2; i++)
    {
        nm1 = rand() % 32;
        // cout << "Numner 1  is  " << nm1 << endl;
        nm2 = rand() % 32;
        // cout << "Numner 2  is  " << nm2 << endl;
        temp = cards[nm1];
        cards[nm1] = cards[nm2];
        cards[nm2] = temp;
        cout << "Numner 1  is  " << cards[nm1] << endl;
        cout << "Numner 2  is  " << cards[nm2] << endl;
    }
}