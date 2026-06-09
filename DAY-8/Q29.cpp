// Program to Print half pyramid pattern

/* 

*
* *
* * *
* * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int rows, i, j ;

    // Take number of rows from user
    cout << "Enter number of rows = ";
    cin >> rows;

    // Loop for rows
    for (i = 1; i <= rows; i++)
    {
        // Print stars in each row
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
