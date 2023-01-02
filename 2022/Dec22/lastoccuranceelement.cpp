#include <bits/stdc++.h>

using namespace std;

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
    cout << "\nEnter the element for which you want to find last occurance: ";
    int ele;
    cin >> ele;
    int temp_ele = No_Ele-1;
    cout << endl;
    for (temp_ele; temp_ele > 0; temp_ele--)
    {
        if (v[temp_ele] == ele)
        {
            cout << "this is the last occurance of your element: " << temp_ele;
            break;
        }
    }

    return 0;
}