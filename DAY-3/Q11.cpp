// Program to find GCD of two numbers 

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Find GCD using Euclid's algorithm
    int min = (a < b) ? a : b;

    for (int i = min; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }

    // Display GCD
    cout << "GCD = " << gcd;

    return 0;
}
