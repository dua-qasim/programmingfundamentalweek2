#include <iostream>
using namespace std;
int main()
{
    int pin;
    int balance = 1000;    
    int choice;
    int amount;
    
    bool loginSuccess = false;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter ATM PIN: ";
        cin >> pin;
        if (pin == 1234)
        {
            cout << "Login Successful" << endl;
            loginSuccess = true;
            break;
        }
        else
        {
            cout << "Wrong PIN" << endl;
        }
        if (i == 3 && !loginSuccess)
        {
            cout << "Too many attempts. Card Blocked." << endl;
        
        }
    }
    
    if (loginSuccess)
    {
        for (int i = 1; i <= 10; i++) 
        {
            cout << endl << "--- ATM MENU ---" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter Choice: ";
            cin >> choice;
            if (choice == 1)
            {
                cout << "Current Balance: " << balance << endl;
            }
            else if (choice == 2)
            {
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                if (amount > 0)
                {
                    balance = balance + amount;
                    cout << "Money Deposited Successfully" << endl;
                }
                else
                {
                    cout << "Invalid amount!" << endl;
                }
            }
            else if (choice == 3)
            {
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                if (amount > balance)
                {
                    cout << "Insufficient Balance" << endl;
                }
                else if (amount <= 0)
                {
                    cout << "Invalid amount!" << endl;
                }
                else
                {
                    balance = balance - amount;
                    cout << "Please collect your cash" << endl;
                }
            }
            else if (choice == 4)
            {
                cout << "Thank you for using ATM" << endl;
                break;
            }
            else
            {
                cout << "Invalid Choice" << endl;
            }
        }
    }
    return 0;
}

