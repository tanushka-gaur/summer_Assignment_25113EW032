// Program to check whether a number is Palindrome or not by function

#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int num)
{
    // Negative numbers are not palindrome
    if (num < 0)
    {
        return false;
    }

    int rev = 0, original;

    // Store original number for comparison
    original = num;

    // Reverse the number
    while (num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    // Palindrome condition
    return rev == original ;
}

int main()
{
    int num;

    // Take input from user
    cout << "Enter the number: ";
    cin >> num;

    // Display result
    if (isPalindrome(num))
    {
        cout << "Palindrome Number\n";
    }
    else
    {
        cout << "Not a Palindrome Number\n";
    }

    return 0;
}
