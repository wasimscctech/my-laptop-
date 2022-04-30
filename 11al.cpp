// Write a C++ program to create a new string taking the first 3 characters of a given string and return the string with the 3 characters added at both the front and back. If the given string length is less than 3, use whatever characters are there

#include <iostream>
using namespace std;
string st(string str){
    if(str.length()>=3){
        string w = str.substr(0,3);
        return w+str+w;
    }
    return str + str + str;
}
int main(){
    cout<<st("wasim")<<endl;
    cout<<st("Hello")<<endl;
    cout<<st("Hi")<<endl;
    cout<<st("-0--000000000---")<<endl;
    
    return 0;
}