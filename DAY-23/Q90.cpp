// Program to Find First Repeating Character

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Find first repeating character
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                cout << "First Repeating Character = " << str[i];
                return 0;
            }
        }
    }

    cout << "No Repeating Character";

    return 0;
}