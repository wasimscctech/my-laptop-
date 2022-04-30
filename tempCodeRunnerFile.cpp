#include <iostream>
#include <string>
using namespace std;

int main(){
    float available_bal = 30000;
    int PIN;
    cout<<"welcome to Wasim Banking"<<endl;
    cout<<"Enter your ATM PIN"<<endl;
    cin>>PIN;
    if(PIN==1234){
    cout<<"Please Choose the Options\n1.Balance Inquiry\n2.Cash Withdraw"<<endl;
    int options;
    cin>>options;
    if(options==1){
        cout<<"Your available balance is: "<<available_bal;}
    else if(options==2){
            int amount;
            cout<<"Please enter the amount"<<endl;
            cin>>amount;
            if(amount%100!=0){
                cout<<"amount must be multiple of 100"<<endl;
            }
            else if(amount>available_bal && amount%100==0){
                cout<<"Insufficiant balance";
            }
            else if(amount<=available_bal && amount%100==0){
                cout<<"please collect your cash"<<endl<<"the available balance is: "<<available_bal-amount<<endl;
            }
            else{
                cout<<"invalid input"<<endl;
            }
        }
        }
    else{cout<<"Invalid PIN entered"<<endl;}
 return 0;}

