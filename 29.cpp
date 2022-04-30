//  Write a C++ program to count a substring of length 2 appears in a given string and also as the last 2 characters of the string. Do not count the end substring
/*Sample Input:
"abcdsab"
"abcdabab"
"abcabdabab"
"abcabd"
Sample Output:
1
2
3
0*/

#include <iostream>
#include <string>
using namespace std;

int st(string str){
    int count = 0;
    int l = str.length();
    string last_substr = str.substr(l-2);
        for (int i = 0; i < l-2; i++)
        {
            if(str.substr(i,2)==last_substr){
                count++;
            }
        }
    return count;
}
int main(){
    cout<<st("abshfjhabjdsab");
    cout<<st("abshfjhabjds");
    cout<<st("ababababababab");
    return 0;
}
