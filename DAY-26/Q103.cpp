// Program to Create ATM Simulation

#include <iostream>
using namespace std;

int main()
{
    int balance = 5000;
    int choice, amount;

    // Display menu
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";

    cout << "Enter your choice = ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Balance = " << balance;
    }
    else if (choice == 2)
    {
        cout << "Enter amount = ";
        cin >> amount;

        balance = balance + amount;

        cout << "Updated Balance = " << balance;
    }
    else if (choice == 3)
    {
        cout << "Enter amount = ";
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