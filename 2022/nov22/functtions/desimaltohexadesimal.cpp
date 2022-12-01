#include <bits/stdc++.h>

using namespace std;

string destohex(int n);

int main()
{
    cout << "Enter the number: ";
    int num;
    cin >> num;
    cout << endl
        << num
        << " --->> " << destohex(num) << endl
        << endl;
    return 0;
}

string destohex(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;
        if (lastdigit <= 9)
        {
            ans = ans + to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    transform(ans.begin(),ans.end(),ans.begin(),::toupper);
    return ans;
}