// Program to Print reverse number triangle 
/*

12345
1234
123
12
1

*/

#include <iostream>
using namespace std;

int main()
{
    // Print 5 rows
    for (int i = 5; i >= 1; i--)
    {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
