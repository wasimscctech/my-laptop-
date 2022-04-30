//  Write a C++ program to check the largest number among three given integers
#include <iostream>
#include <string>
#include "myalgo.h"
using namespace std;

    
int max(int a, int b, int c){
    // if( a>b && a>c){
    //     return a;
    // }
    // else if( c>b && a<c){
    //     return c;
    // }
    // return b;

    return max1(a, max1(b,c));
}
int main(){

    cout<<max(54,213,99)<<endl;
    cout<<max(54,23,99)<<endl;
    cout<<max(54,21,9)<<endl;
    
    return 0;
}