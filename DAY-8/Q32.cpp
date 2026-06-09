// Program to Print repeated-number pattern

/* 

1
22
333
4444
55555

*/

#include <iostream>
using namespace std;

int main()
{
    // Print 5 rows
    for (int i = 1; i <= 5; i++)
    {
        // Print the same number in each row
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        // Go to next line
        cout << endl;
    }
  
   return 0; 
}
