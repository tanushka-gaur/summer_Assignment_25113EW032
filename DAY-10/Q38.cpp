// Program to print Reverse Star Pyramid Pattern
/*

    *********
     *******
      *****
       ***
        *

*/  

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    // Loop for each row
    for (int i = rows; i >= 1; i--)
    {
        // Print spaces
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
