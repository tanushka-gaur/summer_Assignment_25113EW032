// Program to find recursive sum of digits

#include <iostream>
using namespace std;

// Function to find sum of digits
int sumOfDigits(int n)
{
    // Stop when number becomes 0
    if (n == 0)
        return 0;

    // Add last digit with remaining digits
    int remainder = n % 10;
    int newNum = n / 10;

    return remainder + sumDigits(newNum);
}

int main()
{
    int n;

    // Take input from user 
    cout << "Enter a number: ";
    cin >> n;

  
    // Display result 
    cout << "Sum of digits = " << sumOfDigits(n);

    return 0;
}
