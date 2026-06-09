// Program to Print repeated character pattern
/*

A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;

int main()
{
    // Print 5 rows
    for (char ch = 'A'; ch <= 'E'; ch++)
    {
        // Print the same character in each row
        for (char i = 'A'; i <= ch; i++)
        {
            cout << ch;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
