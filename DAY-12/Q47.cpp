// Program to print Fibonacci Series using Function

#include <iostream>
using namespace std;

// Function to print Fibonacci series
void fibonacci(int n)
{
    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive number";
        return 0;
    }

    cout << "Fibonacci Series: ";
    fibonacci(n);

    return 0;
}
