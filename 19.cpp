// Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive

#include <iostream>
#include <string>
using namespace std;
bool st(int a, int b){
    return ((a<=50 && a>=40) && (b<=50 && b>=40)) || ((a<=60 && a>=50) && (b<=60 && b>=50)); 
}
int main(){
    cout<<st(41, 49)<<endl;
    cout<<st(41, 51)<<endl;
    cout<<st(51, 59)<<endl;
    return 0;
}