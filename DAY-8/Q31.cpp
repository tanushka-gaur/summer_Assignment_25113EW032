// Program to Print character triangle

/* 

A
AB
ABC
ABCD
ABCDE

*/

#include <iostream>
using namespace std;

int main()
{
    // Print 5 rows
    for (int i = 1; i <= 5; i++)
    {
        // Print characters in each row
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
