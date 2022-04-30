// Write a C++ program to create a new string with the last char added at the front and back of a given string of length 1 or more

#include <iostream>
using namespace std;
    string st(string str){
        int n = str.length();
        return str[n-1] + str +str[n-1];
    }
int main(){
    cout<<st("Wasim")<<endl;
    cout<<st("1")<<endl;
    cout<<st("Wa")<<endl;
    return 0;
}