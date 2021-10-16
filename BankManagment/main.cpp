#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

class Bank
{
    float bankType, balance;
    char name[100], addr[100];

public:
    void OpenAccount()
    {
        cout << "Enter your FullName: ";
        cin.ignore().getline(name, 100); 
        cout << "Enter your Permanent address: ";
        cin.ignore().getline(addr, 100); 
        cout << "Type of account: (1)Saving,(2)Current ";
        cin >> bankType;
        cout << "Your initial Deposit: ";
        cin >> balance;
        cout << "Your Account has been created." << endl;
    }
    void DepositMoney()
    {
        float deposit;
        cout << "Enter Amount to be Deposited: ";
        cin >> deposit;
        balance += deposit;
        Fund();
    }
    void WithDrawMoney()
    {
        float withdraw;
        cout << "How much Withdraw do you want to make: ";
        cin >> withdraw;
        balance -= withdraw;
        Fund();
    }
    void Fund()
    {
        cout << "Your Current balance is: " << balance << endl;
    }
    void AccountDetails()
    {
        cout << "Your Full Name is: " << name << endl;

        cout << "Your  Permanent address: " << addr << endl;
        if (bankType == 1)
        {
            cout << "Account Type is: Saving Account" << endl;
        }
        else
        {
            cout << "Account Type is: Current Account" << endl;
        }
        Fund();
    }
};

int main()
{
    char ch;
    int option;
    Bank obj;
    do
    {
        cout << "What do you want to do: " << endl;
        cout << "(1) Open Account" << endl;
        cout << "(2) Deposite Money" << endl;
        cout << "(3) Withdraw Money" << endl;
        cout << "(4) Display Fund" << endl;
        cout << "(5) Display AccountDetails" << endl;
        cout << "(6) Exit" << endl;
        cin >> option;
    

    switch (option)
    {
    case 1:
        obj.OpenAccount();
        break;
    case 2:
        obj.DepositMoney();
        break;
    case 3:
        obj.WithDrawMoney();
        break;
    case 4:
        obj.Fund();
        break;
    case 5:
        obj.AccountDetails();
        break;
    case 6:
        if(option==6)
            exit(1);
    default:
        cout << "Not a valid option";
        break;
    }
    cout << "If you want to continue press 'y'";
    ch=getch();
    }while (ch == 'y'||ch=='Y');
    getch();
    return 0;
}