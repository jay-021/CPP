#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str [] = "This is my nice sentence. Today is December 1";
    char *token;
    token = strtok(str," /,;,?");
    while (token != NULL)
    {
        token = strtok (NULL," /,;,?");
        cout<<token;
    }
}