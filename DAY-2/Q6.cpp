// Program to reverse the digits of a number

#include <iostream>
using namespace std;

int main()
{
    int num, digit, reverse = 0;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;               // Get last digit
        reverse = reverse * 10 + digit; // reversing number
        num = num / 10;                 // Remove last digit
    }

    cout << "Reversed number is = " << reverse;

    return 0;
}
