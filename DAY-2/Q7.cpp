// Program to find product of digits

#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int product = 1;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> num;
    num = abs(num);
    
    if (num == 0) cout << "Product of the digits = 0 ";

    else 
    {
        while (num > 0)
        {
            digit = num % 10;         // Get last digit
            product = product * digit; // Multiply the digits
            num = num / 10;           // Remove last digit
        }
        
        cout << " Product of the digits = " << product;
    }
    return 0;
}
