// Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range

#include <iostream>
#include <string>
using namespace std;
int st(int a, int b){
    if( a>= 20 && a<=30 && b>= 20 && b<=30){
        if(a>b){
            return a;
        }
        return b;
    }
    return 0;
}
int main(){
    cout<<st(78, 90)<<endl;
    cout<<st(28, 30)<<endl;
    cout<<st(28, 28)<<endl;
    cout<<st(28, 2)<<endl;
    cout<<st(29, 21)<<endl;

    
    return 0;
}