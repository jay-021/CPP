#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int num, ctr = 0;
    printf("Enter the  number you want to check for prime: ");
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        printf("your number %d is  prime. \n", num);
    }
    else
    {
        printf("Your number %d is not prime. \n", num);
    }

    return 0;
}