// Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive
#include <iostream>
using namespace std;
bool st(int a, int b){
    return (100<=a && a<=200 || 100<=b && b<=200);
}
int main(){
    cout<<st(1,109)<<endl;
    cout<<st(1,1009)<<endl;
    cout<<st(300,109)<<endl;
    cout<<st(1,10);
    return 0;
}