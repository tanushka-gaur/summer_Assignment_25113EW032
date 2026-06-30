// Program to Check Anagram Strings

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

    if (length1 != length2)
    {
        cout << "Strings are Not Anagrams";
        return 0;
    }

    // Compare characters
    for (int i = 0; i < length1; i++)
    {
        int count1 = 0, count2 = 0;

        for (int j = 0; j < length1; j++)
        {
            if (first[i] == first[j])
                count1++;

            if (first[i] == second[j])
                count2++;
        }

        if (count1 != count2)
        {
            cout << "Strings are Not Anagrams";
            return 0;
        }
    }

    cout << "Strings are Anagrams";

    return 0;
}