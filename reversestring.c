/*Write a program which accept number from user
and display its digits in reverse order.
Input : 2395
Output : 5
9
3
2
Input : 1018
Output :8
1
0
1
Input : -1018
Output : 8
1
0
1
Input : 9000
Output : 0
0
0
9*/
#include <stdio.h>
#include <stdlib.h>

void reverse(void){
    int abc[4];
    puts("Enter 4 digit numbers: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &abc[i]);
    }
        
    for (int i = 4; i >= 0; i--)
    {
        
        printf("%d ", &abc[i]);
    }
}
int main()
{
    reverse();
    
    return EXIT_SUCCESS;
}