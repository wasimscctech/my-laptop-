// Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.
#include <iostream>
using namespace std;
bool test(int a){
    return a%3==0 || a%7==0;
}
int main(){
    cout<<test(84)<<endl;
    cout<<test(4)<<endl;
    cout<<test(13)<<endl;
    cout<<test(81)<<endl;
    
    return 0;
}