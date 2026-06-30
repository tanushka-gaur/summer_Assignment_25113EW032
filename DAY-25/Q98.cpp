// Program to Find Common Characters

#include <iostream>
using namespace std;

int main()
{
    char first[100], second[100];

    // Input strings
    cout << "Enter first string = ";
    cin.getline(first, 100);

    cout << "Enter second string = ";
    cin.getline(second, 100);

    cout << "Common Characters = ";

    // Find common characters
    for (int i = 0; first[i] != '\0'; i++)
    {
        for (int j = 0; second[j] != '\0'; j++)
        {
            if (first[i] == second[j])
            {
                cout << first[i] << " ";
                break;
            }
        }
    }

    return 0;
}