// Program to Create Menu-Driven Calculator

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float num1, num2;

    // Display menu
    cout << "====== CALCULATOR ======\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter Your Choice = ";
    cin >> choice;

    cout << "Enter First Number = ";
    cin >> num1;

    cout << "Enter Second Number = ";
    cin >> num2;

    if (choice == 1)
    {
        cout << "Answer = " << num1 + num2;
    }
    else if (choice == 2)
    {
        cout << "Answer = " << num1 - num2;
    }
    else if (choice == 3)
    {
        cout << "Answer = " << num1 * num2;
    }
    else if (choice == 4)
    {
        if (num2 != 0)
            cout << "Answer = " << num1 / num2;
        else
            cout << "Division by Zero is Not Possible";
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}