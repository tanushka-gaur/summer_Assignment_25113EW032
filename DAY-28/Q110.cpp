// Program to Create Bank Account System

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int accountNumber;
    float balance = 5000, amount;
    int choice;

    // Input account details
    cout << "Enter Account Holder Name = ";
    cin.getline(name, 50);

    cout << "Enter Account Number = ";
    cin >> accountNumber;

    // Menu
    cout << "\n1. Check Balance";
    cout << "\n2. Deposit Money";
    cout << "\n3. Withdraw Money";
    cout << "\nEnter Choice = ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Balance = " << balance;
    }
    else if (choice == 2)
    {
        cout << "Enter Amount = ";
        cin >> amount;

        balance = balance + amount;

        cout << "Updated Balance = " << balance;
    }
    else if (choice == 3)
    {
        cout << "Enter Amount = ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Updated Balance = " << balance;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}