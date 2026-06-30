// Program to Compress a String

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    // Input string
    cout << "Enter a string = ";
    cin.getline(str, 100);

    // Compress string
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    return 0;
}