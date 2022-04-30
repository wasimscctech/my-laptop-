/*

Write a program which accept number from user
and print factors of that number.

Input : 24
Output: 1 2 3 4 6 8 12

*/

#include <stdio.h>
#include <stdlib.h>

void factor(int fact)
{
    for (int i = 1; i < fact; i++)
    {
        if (fact % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    factor(24);
    return EXIT_SUCCESS;
}
