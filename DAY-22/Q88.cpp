// Program to Remove Spaces from String

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Remove spaces
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    // Display result
    cout << "String without spaces = " << str;

    return 0;
}