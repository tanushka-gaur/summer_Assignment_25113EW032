// Program to find LCM of two numbers

#include <iostream>
using namespace std;

int main() 
{
    int a, b, x, y;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Store original values
    x = a;
    y = b;

    // Find GCD first
    while (y != 0) 
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;

    // Calculate LCM using formula
    int lcm = (a * b) / gcd;

    // Display LCM
    cout << "LCM = " << lcm;

    return 0;
}