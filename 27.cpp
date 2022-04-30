// Write a C++ program to create a new string made of every other character starting with the first from a given string.

#include <iostream>
#include <string>
using namespace std;

string st(string str){
//     for (int i = 0; i < str.length(); i+=2)
//     {
//         cout<< str[i];
//     }
//     // return str;
// }

           string result = "";
            for (int i = 0; i < str.length(); i++)
             {
                 if (i % 2 == 0) result += str[i];
             }
            return result;
        }

        
int main(){
    cout<<st("10101010101");
    cout<<st("wawawawawawaw");
    int a = 3; 
    cout<<a;
}