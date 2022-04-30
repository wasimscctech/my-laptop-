#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;


int main(){



    
// find the two line is orthoganal or not 
//  double x[4],y[4];
//     while(cin >> x[0] >> y[0]){
//         for(int i=1; i<4; i++){
//             cin >> x[i] >> y[i];
//         }
//         if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0]) == 0 )
//         {
//             cout << "Yes, AB and CD are orthogonal." << endl;
//         }
//         else
//         {
//             cout << "Yes, AB and CD are not orthogonal." << endl;
//         }
//     }


// #include <algorithm>
// using namespace std;

// int main() {
//     string text;
//     getline(cin, text);
//     transform(text.begin(), text.end(), text.begin(), ::toupper);
//     cout << text << endl;


// factorial
// int fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int num;
//     cout<<"enter a num: ";
//     cin>>num;
//     cout<<fact(num);   
//     return 0;
// }



// int num[7];
//     for (int i = 0; i != 7; ++i) {
//         cin >> num[i];
//     }
//     sort(num, num+7);
//     cout << " " << num[6]  << " " << num[5]  << " " << num[4]  << " " << num[3]  << " " << num[2] << " " << num[1] << " " << num[0];


//add total values
// int Wasim(int n){
//     int total = 0;
//     for(int i = 1; i<=n; i++){
//         total += i;
//     }
//     return total;
// }
// cout<<Wasim(4);
// cout<<Wasim(100);

//     #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     vector<int> nums;
//     int n;
//     while (cin >> n) {
//         nums.push_back(n);
//     }
//     sort(nums.rbegin(), nums.rend());

//     for (int i = 0; i != 3; ++i) {
//         cout << nums[i] << endl;
//     }
//     return 0;
// }
    // dist between two points
    // int x1 = 1, y1 = 1, x2 = 4, y2 = 4;
    // int x = x2 -x1, y = y2-y1;
    // float d;
    // d = sqrt(x*x + y*y);
    // cout<<d;

    // String manupulators
    //  string st = "WasimShaikh";
    // cout<<st.length()<<endl<<st.at(0)<<endl<<st[0]<<endl;
    // cout<<st.empty()<<endl;
    // cout<<st.replace(0,5, "Almas")<<endl<<st.substr(0,5)<<endl<<st.append(" Wasim ")<<endl<<st+"Shaikh"<<endl;
    // cout<<st.insert(5, "Wasim");

    // cout<<st.at(6,11);


    // ASCII code/unicode
    // char A= 'a'; 
    // cout<<int(A);
    // cout<<char(int(A));



    // swape without using third variable
    // int a=3, b=5;
    // a = a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<b;
    
    // int a = 5;
    // for(int i = 1; i<11; i++){
    //     cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    // }


    // mystery series 5 4 2 7 11 10 8 13 17 16 14 19 23 22 20 25 29 28 26 31 35 34 32 37 41 4 0 38 43 47 46 44 49
    // int num = 1;
    // while(true){
    //     num++;
    //     if((num%3)==0)
    //     continue;
    //     if(num==50)
    //     break;
    //     if((num%2)==0){
    //         num=num+3;
    //     }
    //     else{
    //         num=num-3;
    //     }
    //     cout<<num<<" ";
    // }
    // int a = 17, b = 3;
    // cout<<a/b<<endl;
    // cout<<double(a)/b<<endl; 
    // float a1 = 6.5, b2 = 9.2;
    // cout<<a1/b2<<endl;
    // cout<<int(a1)*int(b2);


    // int num;
    // cout<<"enter a num"<<endl;
    // cin>>num;
    // if(num>0){
    //     cout<<"the number is positive";
    // }
    // else if(num < 0){
    //     cout<<"the number is negative";
    // }
    // else{
    //     cout<<"the number is zero";
    // }

    //area of a triangle using heron's formula area = sqrt(s(s-a)(s-b)(s-c)), s=(a+b+c)/3
    // float a, b, c, s, area;
    // a= 2, b = 3, c = 4;
    // s = (a+b+c)/2;
    // cout<<"S IS"<<s<<endl;
    // area = sqrt(s*((s-a)*(s-b)*(s-c)));

    // cout<<"the area is: "<<area;

    // float c, f;
    // cout<<"enter the temp"<<endl;
    // cin>>f;
    // c = 5/9*(f-32);
    // cout<<c;

    // int x=4;
    // cout<<x<<x<<x<<x<<x<<x<<endl;
    // cout<<x<<" "<<" "<<" "<<" "<<x<<endl;
    // cout<<x<<" "<<" "<<" "<<" "<<x<<endl;
    // cout<<x<<" "<<" "<<" "<<" "<<x<<endl;
    // cout<<x<<" "<<" "<<" "<<" "<<x<<endl;
    // cout<<x<<x<<x<<x<<x<<x<<endl;

    // #include <climits> 
    // cout<<INT_MAX;
    // cout<<INT_MIN;

    // #include <iomanip>
    //setw

    // int a, b, temp;
    // a = 10;
    // b = 20;
    // temp = a;
    // a = b;
    // b = temp;
    // cout<<a<<endl<<b;



    return 0;
}