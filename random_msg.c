#include <stdio.h>
#include <stdlib.h>

int main(){
    char* arr[3]={"hi", "hello", "hey"};
    srand(time(NULL));
    printf(arr[rand()%3]);
    return 0;
}