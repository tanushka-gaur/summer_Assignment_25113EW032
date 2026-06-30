 // Program to Find Frequency of a Character

#include <iostream>
using namespace std;

int main()
{
    char str[100], ch;
    int count = 0;

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Input character
    cout << "Enter character = ";
    cin >> ch;

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    // Display result
    cout << "Frequency = " << count;

    return 0;
}