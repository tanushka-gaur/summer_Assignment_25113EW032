// Program to Print hollow square pattern 
/*

    *****
    *   *
    *   *
    *   *
    *****

*/

#include <iostream>
using namespace std;

int main()
{
  // Print 5 rows
    for (int i = 1; i <= 5; i++)
    {
        // Print 5 columns
        for (int j = 1; j <= 5; j++)
        {
            // Print star on border
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
