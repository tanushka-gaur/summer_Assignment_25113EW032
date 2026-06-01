// program to find factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> n;

    // Calculating factorial using loop
    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    // Displaying factorial
    cout << "Factorial of " << n << " is: " << factorial;

    return 0;
}