// Write a C++ program to exchange the first and last characters in a given string and return the new string
#include <iostream>
#include <string>
using namespace std;
string st(string str){
    int n = str.length();
    char temp = str[0];
	str[0] = str[n - 1];
	str[n - 1] = temp;
    return str;
}
int main(){
    cout<<st("Wasim")<<endl;
    
    return 0;
}