// Program to Convert decimal to binary

#include <iostream>
using namespace std;

int main()
{
    int decimalNum;
    int binaryDigits[32];
    int index, i = 0 ;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    cout << "The binary digit of " << decimalNum<< " is: "; 
  
    if (decimalNum == 0)
    {
        cout << "0";
        return 0;
    }

    // To store remainder
    while (decimalNum > 0)
    {
        binaryDigits[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    // To print binary number in reverse order
    for ( index = i - 1; index >= 0; index--)
    {
        cout << binaryDigits[index];
    }

    return 0;
}
