// Program to calculate Recursive Fibonacci

#include <iostream>
using namespace std;

// Function to find Fibonacci term
int fibonacci(int num)
{
    // First two terms
    if (num == 0)
        return 0;

    if (num == 1)
        return 1;

    // Add previous two terms
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int num;

    // Take input from user
    cout << "Enter term number: ";
    cin >> num;

    // Display result 
    cout << "Fibonacci term = " << fibonacci(num);

    return 0;
}
