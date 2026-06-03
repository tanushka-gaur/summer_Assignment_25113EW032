// Program to find GCD of two numbers 

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Find GCD using Euclid's algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Display GCD
    cout << "GCD = " << a;

    return 0;
}