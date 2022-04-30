// Write a C++ program to check if one given temperatures is less than 0 and the other is greater than 100
#include <iostream>
using namespace std;
bool st(int t1, int t2){
        return (t1 < 0 && t2 > 100 || t1>100 && t2<0 );

}
int main(){
    cout<<st(101, -1)<<endl;
    cout<<st(-10, 150)<<endl;
    cout<<st(-11, -10)<<endl;
    cout<<st(101, 1)<<endl;
    
    return 0;
}