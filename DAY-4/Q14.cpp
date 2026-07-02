// Write a program to Find nth Fibonacci term.
/*
    f() = fibonacci function

    f(0) = 0th term of fibonacci sequence
    f(1) = 1st term of fibonacci sequence
    f(2) = 2nd term of fibonacci sequence
     |     |   |   |   |   |   |   |   |
     |     |   |   |   |   |   |   |   |
     |     |   |   |   |   |   |   |   |
     |     |   |   |   |   |   |   |   |
    f(n) = nth term of fibonacci sequence
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int firstterm = 0, secondterm = 1, newterm;

    // Take input from user
    cout << "Enter the value of n = ";
    cin >> n;

    if (n == 0)
    {
        cout << firstterm;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        newterm = firstterm + secondterm;

        firstterm = secondterm;
        secondterm = newterm;
    }
    // Display the output
    cout << n << "th Fibonacci term = " << firstterm;

    return 0;
 
}
