// Write a C++ program to create a new string which is 3 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.

#include <iostream>
#include <string>
using namespace std;
string st(string str){
    
    if(str.length()>=2){
        
        return str.substr(0,2) + str.substr(0,2) + str.substr(0,2) ;
    }
    return str ;
}
int main(){
    cout<<st("wasim")<<endl;
    cout<<st("w")<<endl;
    cout<<st("A Shaikh")<<endl;
    
    return 0;
}