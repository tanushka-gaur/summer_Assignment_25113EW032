// Program to print number triangle

/*

1
12
123
1234
12345

*/

#include <iostream>
using namespace std;

int main()
{
    // Repeat loop for 5 rows
    for (int i = 1; i <= 5; i++)
    {
        // Print numbers in each row
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}
