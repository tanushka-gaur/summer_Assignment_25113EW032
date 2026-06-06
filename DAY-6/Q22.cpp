 // Program to convert binary to decimal

#include <iostream>
using namespace std;

int main()
{
    int binaryNum, digit;
    int decimalNum = 0;
    int power = 1;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    while (binaryNum > 0)
    {
        digit = binaryNum % 10;         
        decimalNum += digit * power;     
        power *= 2;                      
        binaryNum /= 10;                
    }

    cout << "Decimal number is = " << decimalNum;

    return 0;
}
