// Program to Print Number Pyramid
/*
Output:

    1
   121
  12321
 1234321
123454321

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

        // Print ascending numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Print descending numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
