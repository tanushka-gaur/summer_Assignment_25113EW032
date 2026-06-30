// Program to Find Longest Word in a Sentence

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    int length = 0;
    int maxLength = 0;

    // Input sentence
    cout << "Enter a sentence = ";
    cin.getline(str, 100);

    // Find longest word
    for (int i = 0; ; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            length++;
        }
        else
        {
            if (length > maxLength)
            {
                maxLength = length;
            }

            length = 0;
        }

        if (str[i] == '\0')
            break;
    }

    cout << "Length of Longest Word = " << maxLength;

    return 0;
}