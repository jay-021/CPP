#ifndef CONVERSION_H
#define CONVERSION_H
#include<bits/stdc++.h>
using namespace std;

//function list
int bitodec(int n);
int dectooct(int n);
int octtodec(int n);
int dectobi(int n);
int hexttodec(string n);



//function 1 binary to decimal
int bitodec(int n)
{
    int a = 1;
    int sum = 0;
    while (n != 0)
    {
        sum = sum + (a * (n % 10));
        n=n/10;
        a = a * 2;
    }
    return sum;
}

//function 2 decimal to octal
int dectooct(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

//function 3  -- octal to decimal
int octtodec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

//function 4 -- decimal to binary
int dectobi(int n)
{
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

//function 5 -- Hexadecimal to decimal
int hexttodec(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

//function 6 -- Decimal to Hexadecimal
string dectohex(int n)
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

#endif