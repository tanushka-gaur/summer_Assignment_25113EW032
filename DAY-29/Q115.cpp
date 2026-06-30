// Program to Create Menu-Driven String Operations

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int choice;

    // Input string
    cout << "Enter a String = ";
    cin.getline(str, 100);

    // Display menu
    cout << "\n====== STRING OPERATIONS ======\n";
    cout << "1. Find Length\n";
    cout << "2. Convert to Uppercase\n";
    cout << "3. Count Vowels\n";

    cout << "Enter Choice = ";
    cin >> choice;

    if (choice == 1)
    {
        int length = 0;

        while (str[length] != '\0')
        {
            length++;
        }

        cout << "Length = " << length;
    }
    else if (choice == 2)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }

        cout << "Uppercase String = " << str;
    }
    else if (choice == 3)
    {
        int vowels = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
        }

        cout << "Vowels = " << vowels;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}