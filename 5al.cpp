// Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged
#include <iostream>
#include <string>
using namespace std;
string st(string a){
    if(a.substr(0,2)=="if"){
        return a;
    }
    // return a.insert(0, "if ");
    return "if "+ a;
}
int main(){
    cout<<st("if we are ready ")<<endl;
    cout<<st("then let's go");
    
    return 0;
}