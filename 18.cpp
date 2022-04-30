// Write a C++ program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal
#include <iostream>
#include <string>
using namespace std;
int st(int a, int b){
    const int n = 100;
    if(abs(n - a)< abs(n-b)){
        return a;
    }
    else if(a==b){
        return 0;
    }
    return b;
}
int main(){
    cout<<st(99, 98)<<endl;
    cout<<st(9, 19)<<endl;
    cout<<st(8, 8)<<endl;
    return 0;
}