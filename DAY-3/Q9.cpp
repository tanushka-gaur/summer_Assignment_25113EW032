// Program to check whether the number is prime

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    // Take Input number from the user
    cout << "Enter a number: ";
    cin >> n;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = false;
    } else {
        // Check divisibility from 2 to n/2
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Display the result
    if (isPrime)
        cout << n << " is a Prime Number";
    else
        cout << n << " is not a Prime Number";

    return 0;
}