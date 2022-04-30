//  Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30
#include <iostream>
using namespace std;

int test(int a, int b){
    return a == 30 || b == 30 || (a+b)==30;
}
int main(){
    cout<<test(15,15)<<endl;
    cout<<test(15,11)<<endl;
    cout<<test(30,11)<<endl;
    
    return 0;
}