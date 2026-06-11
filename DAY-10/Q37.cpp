// Program to Print Star Pyramid Pattern
/*
Output:
    *
   ***
  *****
 *******
*********
*/

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;  // Number of rows in the pyramid

    // Outer loop controls the rows
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        // Print stars in each row
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
