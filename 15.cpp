// Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise false

#include <iostream>
using namespace std;
bool st(int a, int b, int c){
        return (a<=50 && a>=20) || (b<=50 && b>=20) || (c<=50 && c>=20);
}
int main(){
    cout<<st(109, 1, 19)<<endl;
    cout<<st(109, 1, 32)<<endl;
    cout<<st(31, 21, 39)<<endl;
    return 0;
}