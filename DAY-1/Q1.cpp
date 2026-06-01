// Program to calculate sum of first n natural numbers; 

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    // Taking input from user
    cout << "Enter the value of N: ";
    cin >> n;

    // Loop to add numbers from 1 to N
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    // Displaying the result
    cout << "Sum of first " << n << " natural numbers is: " << sum;

    return 0;
}
