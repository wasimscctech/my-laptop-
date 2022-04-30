// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operation;
    cout << "Wasim's Calculator!" << endl;
    cin >> num1 >> operation >> num2;
    switch (operation) {
    case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
    case '%': 
        bool ismynum1int, ismynum2int;
        ismynum1int=(int(num1) == num1);
        ismynum2int=(int(num2) == num2);
        if (ismynum1int && ismynum2int) //we did not use assignment operator here, as the datatypes are bool
            cout << num1 << operation << num2 << "=" << int(num1) % int(num2);
        else
            cout << "for this operation the numbers must be whole";
        break;
    default: cout << "Invalid operation!";
    }
    system("pause > 0");
}

