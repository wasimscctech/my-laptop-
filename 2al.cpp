// Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference 
#include <iostream>
using namespace std;
const int c = 51;
int diff(int n){
    if(n>c){
        return (n-c)*3;
    }
    return abs(n-c);
}
int main(){
    cout<<diff(55)<<endl;
    cout<<diff(51)<<endl;
    cout<<diff(0)<<endl;
    cout<<diff(5)<<endl;

    return 0;
}