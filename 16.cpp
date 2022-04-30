// Write a C++ program to check if a string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string

#include <iostream>
#include <string>
using namespace std;
string st(string str){
    if(str.substr(1,2)=="yt"){
        string str1 = str.erase(1,2);
        return str1;
    }
    return str;
}
int main(){
    cout<<st("python")<<endl;
    cout<<st("ythhhd")<<endl;
    cout<<st("psython")<<endl;
    
    return 0;
}