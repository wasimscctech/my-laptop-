// #include <iostream>
// #include <string>
// using namespace std;
#include <stdio.h>
#include <stdlib.h>

int main(){
    float fer, cel;
    printf("enter degree in Ferhanheit: ");
    scanf("%f", &fer);
    cel=(fer - 32) * 5/9;
    printf("degree in celsius is: %f", cel);
    return 0;
}
