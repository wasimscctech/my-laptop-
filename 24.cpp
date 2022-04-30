// Write a C++ program to create a new string which is n (non-negative integer) copies of the first 3 characters of a given string. If the length of the given string is less than 3 then return n copies of the string

#include <iostream>
#include <string>
using namespace std;

string st(string str){

//  string s = str.substr(1, 2);

      if(str.length()>=3){
          string s = str.substr(0,3);
          return s + s + s;
      }
    return str + str + str;
}
int main()
{
    cout << st("Wasim") << endl;
    cout << st("CPP") << endl;
    cout << st("C#") << endl;

    return 0;
}