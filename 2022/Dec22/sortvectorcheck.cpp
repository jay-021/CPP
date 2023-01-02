#include <bits/stdc++.h>

using namespace std;
void sort(vector<int> v)
{
    int check = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            check++;
        }
    }
    // cout<<"\n check: "<<check;
    if (check != 0)
    {
        cout << "\nyour array is not sorted" << endl;
    }
    else
    {
        cout << "\n Your array is sorted" << endl;
    }
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

    sort(v);

    return 0;
}