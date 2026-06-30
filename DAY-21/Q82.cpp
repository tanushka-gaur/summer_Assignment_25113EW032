// Program to Reverse a String

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Find string length
    while (str[length] != '\0')
    {
        length++;
    }

    // Display string in reverse
    cout << "Reversed String = ";

    for (int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}