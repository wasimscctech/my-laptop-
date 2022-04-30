// Write a C++ program to check if a given string contains between 2 and 4 'z' character.

#include <iostream>
#include <string>
using namespace std;
bool st(string str){
    return str[1]=='z' || str[2] =='z' || str[3]=='z';
}
int main(){
    cout<<st("lazy")<<endl;
    cout<<st("zesty")<<endl;
    cout<<st("rockz")<<endl;
    return 0;
}