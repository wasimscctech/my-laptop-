// Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive.
#include <iostream>
using namespace std;
string st(string s, int n){
    return s.erase(n,1);
}
int main(){
    cout<<st("WasimS", 1)<<endl;
    cout<<st("WasimS", 0)<<endl;
    cout<<st("WasimS", 4)<<endl;
    
    return 0;
}