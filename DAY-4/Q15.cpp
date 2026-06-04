// Write a program to Check Armstrong number.

#include <iostream>
using namespace std;

int main()
{
    int inputnum, original, currentDigit, Sum = 0;

    // Take input from user
    cout << "Enter a number: ";
    cin >> inputnum;

    original = inputnum;

    while (inputnum > 0)
    {
        currentDigit = inputnum % 10;

        Sum = Sum + (currentDigit * currentDigit * currentDigit);

        inputnum = inputnum / 10;
    }

    //Display the result 
    if (Sum == original)
        cout << "Gicen number is Armstrong Number";
    else
        cout << "Given number is not an Armstrong Number";

    return 0;
}
