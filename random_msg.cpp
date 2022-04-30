#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    const string msg[3]= {"hey", "is that you?", "come on"};
    srand(time(NULL));
    cout<<msg[rand() % 3];
    return 0;
}