#include <bits/stdc++.h>

using namespace std;
void calc(vector<int> v)
{
    int check = 0;
    signed int sum_even = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] % 2 == 0)
        {
            sum_even += v[i];
        }
    }
    signed int sum_odd = 0;
    for (int i = 0; i <= v.size() - 1; i++)
    {
        if (v[i] % 2 != 0)
        {
            sum_odd += v[i];
        }
    }

    cout << endl
        << "even sum " << sum_even;
    cout << endl
        << "odd sum " << sum_odd;
    signed int final = sum_even - sum_odd;
    cout << endl
        << "even minus odd is " << final << endl;
}

int main()
{
    cout << "How many element do you want to add: ";
    int No_Ele;
    cin >> No_Ele;

    cout << endl
        << "Enter elements in vector: ";

    vector<int> v(No_Ele);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << endl
        << "this is your vector: ";
    for (int ele : v)
    {
        cout << ele << " ";
    }

    calc(v);

    
    return 0;
}