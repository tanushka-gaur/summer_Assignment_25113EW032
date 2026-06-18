// Program to check whether a number is Armstrong or not by Function

#include <iostream>
#include <cmath>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int num)
{
    int count = 0, sum = 0;

    // Count number of digits in the given number
    int temp = num;
  
    if (num == 0)
        count = 1;
    else
    {
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
    }


    // Calculate sum of digits raised to power of digits
    temp = num; 
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Check if Armstrong
    return (sum == num);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong Number";
    else
        cout << num << " is not an Armstrong Number";

    return 0;
}
