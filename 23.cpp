// Write a C++ program to create a new string which is n (non-negative integer) copies of a given string

#include <iostream>
#include <string>
using namespace std;
string st(string str, int n){
    for(int i = 0; i<(n-1); i++){
        cout<<str;
    }
    return str;
}
int main(){
    cout<<st("Wasim ", 3)<<endl;
    cout<<st("Wasim ", 2)<<endl;
    cout<<st("Wasim ", 1)<<endl;

    return 0;
}