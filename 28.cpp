// Write a C++ program to create a string like "aababcabcd" from a given string "abcd"
/*Sample Input:
"abcd"
"abc"
"a"
Sample Output:
aababcabcd
aababc*/

#include <iostream>
#include <string>
using namespace std;

string st(string str){
    string result;
    for (int i = 0; i <= str.length(); i++)
    {
        result+= str.substr(0, i);
    }
    return result;
}
int main(){
    cout<<st("abcd")<<endl;
    cout<<st("abcde")<<endl;
    cout<<st("ab")<<endl;
    
    return 0;
}
