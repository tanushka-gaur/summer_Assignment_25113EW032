// Program to Check Palindrome String

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;
    bool palindrome = true;

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Find string length
    while (str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    // Display result
    if (palindrome)
        cout << "String is Palindrome";
    else
        cout << "String is Not Palindrome";

    return 0;
}