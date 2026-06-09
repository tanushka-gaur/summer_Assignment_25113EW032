// Program to print reverse star pattern

/* 

*****
****
***
**
*

*/


#include <iostream>
using namespace std;

int main()
{
    // Print 5 rows
    for (int i = 5; i >= 1; i--)
    {
        // Print stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
