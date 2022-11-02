
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int i, j;
    int grades[10];
    int max, min, index_max, index_min;
    cout << "\nEnter 10 grades: ";
    for (i = 0; i < 10; i++)
    {
        cin >> grades[i];
    }
    max = grades[0];
    for (i = 1; i < 10; i++)
    {
        if (max < grades[i])
        {
            max = grades[i];
        }
    }
    min = grades[0];
    for (i = 1; i < 10; i++)
    {
        if (min > grades[i])
        {
            min = grades[i];
        }
    }
    max = grades[0];
    for (i = 1; i < 10; i++)
    {
        if (max < grades[i])
        {
            max = grades[i], index_max = i;
        }
    }
    cout << endl
        << "Maximum grades is: " << grades[index_max] << endl;
    min = grades[0];
    for (i = 1; i < 10; i++)
    {
        if (min > grades[i])
        {
            min = grades[i], index_min = i;
        }
    }
    cout << endl
        << "minimum grades is: " << grades[index_min] << endl;
    return 0;
}