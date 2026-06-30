// Program to Sort Words by Length

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[5][20], temp[20];

    // Input words
    cout << "Enter 5 words:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> word[i];
    }

    // Sort words by length
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    // Display words
    cout << "\nWords Sorted by Length:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << word[i] << endl;
    }

    return 0;
}