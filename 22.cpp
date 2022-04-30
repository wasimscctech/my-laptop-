//  Write a C++ program to check if two given non-negative integers have the same last digit
#include <iostream>
#include <string>
using namespace std;
    bool st(int x, int y){
        
            return abs(x % 10) == abs(y % 10);
    }
int main(){
    cout<<st(123, 33)<<endl;
    cout<<st(12, 33)<<endl;
    cout<<st(123, 31)<<endl;
    cout<<st(1221, 131)<<endl;
    
    return 0;
}