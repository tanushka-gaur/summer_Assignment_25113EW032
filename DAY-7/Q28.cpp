// Program to calculate recursive reverse number

#include <iostream>
using namespace std;

int reverseNum = 0;

// Function to reverse a number
void reverseNumber(int n)
{
    // Stop when number becomes 0
    if (n == 0)
        return;

    // Add last digit to reversed number
    reverseNum = reverseNum * 10 + n % 10;

    // Recursive call
    reverseNumber(n / 10);
}

int main()
{
    int n;

    // Take input from user
    cout << "Enter a number: ";
    cin >> n;

    reverseNumber(n);

    // Display result 
    cout << "Reverse number = " << reverseNum;

    return 0;
}
