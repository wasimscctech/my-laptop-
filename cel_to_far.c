#include <stdio.h>
#include <stdlib.h>
//F=9/5*C +32
// C=5/9(F-32)
int main(){
    float cel, fer;
    printf("enter degree in celsius: ");
    scanf("%f", &cel);
    fer = (cel * 9/5) + 32;
    printf("degree in Farhernheit: %f ", fer);
    return EXIT_SUCCESS;
}