// Program to print character pyramid
/*

Output:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    // Loop for each row
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        // Print ascending characters
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch;
        }

        // Print descending characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            cout << ch;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
