//  Write a C++ program to check if a given string starts with 'C#' or not
#include <iostream>
using namespace std;
bool st(string str){
    if(str.substr(0,2)=="C#"){
        return true;
    }
    return false;
}
int main(){
    cout<<st("C#")<<endl;
    cout<<st("C# Sharp")<<endl;
    cout<<st("C++")<<endl;
    
    return 0;
}