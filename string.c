#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void len() {
    int count=0;
    char str[100]="Suyash is our teacher";
    int i=0;

    while(str[i] != '\0') {
       count++;
       i++;
    }
    printf("Length of the string is: %d", count);
}

int main()
{   
    len();
    return EXIT_SUCCESS;
}
    // int length=0;
//     length = len();
//     printf("Length of th e string s: %d\n",length);

    