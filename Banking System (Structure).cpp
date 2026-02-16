// Banking System (Structure).cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct Account
{
    int account_num;
    char account_holder_name[50];
    float balance;
};

int main()
{
   
    Account account_1;

    cout << " Enter Account Number: " << endl;
    cin >> account_1.account_num;
    
    cin.ignore();

    cout << " Enter Holder Name: " << endl;
    cin.getline(account_1.account_holder_name, 50);

    cout << " Enter Account Balance: " << endl;
    cin >> account_1.balance;

    cout << " ====== Account Details ====== " << endl;
    cout << " Account Number " << account_1.account_num << endl;
    cout << " Holder Name: " << account_1.account_holder_name << endl;
    cout << " Account Balance: " << account_1.balance << endl;



}

