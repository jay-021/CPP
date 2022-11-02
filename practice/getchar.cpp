#include <iostream>
#include <string>
#include <stdio.h>
#include <curses.h>

using namespace std;

int main()
{
    int n;
    int arr[50];
    int i, j;
    char ch;
    cout << "\n:e,p,q char use for quite enter or print array:\n----------------------------------------" << endl;
    cout << "Type e for adding enput in array: " << endl;
    cout << "Type p for Print array: " << endl;
    cout << "Type q for exit the programme: " << endl;
    if ((ch = getchar()) != 'q' || (ch = getchar()) != 'Q')
    {
        cout << "your input is -- " << ch;
        switch (ch)
        {
        case 'e':
        {
            if (ch == 'e' || ch == 'E')
            {
                cout << "\nEnter the array size between 1 to 25: ";
                cin >> n;

                for (i = 0; i < n; i++)
                {
                    cout << "Enter the value number: " << i + 1 << endl;
                    cin >> arr[i];
                }
                break;
            }
        }
        case 'p':
        {
            if (ch == 'p' || ch == 'P')
            {
                cout << endl
                    << "This is your array:" << endl;
                for (i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                break;
            }
        }
        default:
            break;
        }
    }
    else
    {
        cout << "See you again";
    }

    return 0;
}