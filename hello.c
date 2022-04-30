#include <stdio.h>
#include <stdlib.h>

int main()
{
    int columns;
    int rows;

    for (rows = 1; rows <= 7; rows++)
    {
        for (columns = 1; columns <= 4; columns++)
        {
            printf("%c\t", '|');
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}