// Program to Find String Length without strlen()

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Count characters
    while (str[length] != '\0')
    {
        length++;
    }

    // Display length
    cout << "String Length = " << length;

    return 0;
}