#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 6);
    // for each loop
    for (int ele : v)
    {
        cout << ele << " ";
    }
    v.erase(v.end() - 2);
    cout << endl;
    // while loop
    int idx = 0;
    while (idx < v.size())
    {
        cout << v[idx++] << " ";
    }

    return 0;
}