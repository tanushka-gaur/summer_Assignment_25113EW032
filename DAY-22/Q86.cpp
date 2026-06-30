 // Program to Count Words in a Sentence

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int words = 1;

    // Input sentence
    cout << "Enter a sentence = ";
    cin.getline(str, 100);

    // Count spaces
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }

    // Display result
    cout << "Number of Words = " << words;

    return 0;
}