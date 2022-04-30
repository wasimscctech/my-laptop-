// Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include <iostream>
using namespace std;

int test(int a, int b){
    if(a==b){

        return a*3;
    }
    return a+b;
}
int main(){
    cout<<test(2,2)<<endl;
    cout<<test(18,2)<<endl;
    cout<<test(10,10)<<endl;
    cout<<test(2,9)<<endl;
    return 0;
}