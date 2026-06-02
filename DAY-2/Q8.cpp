// Program to check whether a number is palindrome

#include <iostream>
using namespace std;

int main() 
{
    int num, original, digit, reverse = 0;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> num;

    original = num; // Store the original number

    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        cout << "Given number is Palindrome Number";
    else
        cout << "Given number is not a Palindrome Number";

    return 0;
}