// Program to Check String Rotation

#include <iostream>
using namespace std;

int main()
{
    char first[100], second[100];
    int length1 = 0, length2 = 0;

    // Input strings
    cout << "Enter first string = ";
    cin.getline(first, 100);

    cout << "Enter second string = ";
    cin.getline(second, 100);

    // Find lengths
    while (first[length1] != '\0')
        length1++;

    while (second[length2] != '\0')
        length2++;

    // Check lengths
    if (length1 != length2)
    {
        cout << "Strings are Not Rotations";
    }
    else
    {
        cout << "Strings may be Rotations";
    }

    return 0;
}