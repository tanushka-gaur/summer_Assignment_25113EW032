// Program to print prime numbers in a range

#include <iostream>
using namespace std;

int main() {
    int start, end;

    // Input the range
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are: ";

    // Check each number in the range
    for (int num = start; num <= end; num++) {
        bool isPrime = true;

        if (num <= 1)
            isPrime = false;
        else {
            // Check whether the number is prime
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        // Print prime number
        if (isPrime)
            cout << num << " ";
    }

    return 0;
}