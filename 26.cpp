// Write a C++ program to check if the first appearance of "a" in a given string is immediately followed by another "a"

#include <iostream>
#include <string>
using namespace std;

bool st(string str){
    for (int i = 0; i < str.length()-1; i++)
    {
        if (str.substr(i, 2)=="aa"){
            return true;}
    }
    return false;
}
int main(){
    cout<<st("waasim")<<endl;
    cout<<st("wasiaam")<<endl;
    cout<<st("wasim")<<endl;
    cout<<st("aaaaaaaaa")<<endl;
    cout<<st("ahahahahaha")<<endl;
    return 0;
}