#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;
    v.push_back(1); // to add elements
    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;
    v.push_back(5);
    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;
    v.push_back(10);
    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;

    v.pop_back();
    cout << "Size: " << v.size() << endl;
    cout << "Capicity: " << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}