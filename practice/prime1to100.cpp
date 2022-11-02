#include <iostream>
using namespace std;
int main()
{
    int value = 0;
    cout << "Prime Numbers Between 1 to 100 are:\n";
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                value++;
                break;
            }
        }
        if (value == 0)
            cout << i << endl;
        value = 0;
    }
    cout << endl;
    return 0;
}