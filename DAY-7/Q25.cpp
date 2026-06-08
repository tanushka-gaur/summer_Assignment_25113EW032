// Program to calculate recursive factorial


#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n)
{
    // Factorial of 0 and 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Multiply current number with factorial of previous number
    return n * factorial(n - 1);
}

int main()
{
    int n;

    // Take input from user
    cout << "Enter a number: ";
    cin >> n;

    // Display result 
    cout << "Factorial = " << factorial(n);

    return 0;
}
