// Program to Check Whether a Number is Perfect or Not by Function

#include <iostream>
using namespace std;

// Function to check perfect number
bool isPerfect(int num)
{
    int sum = 0;

    // Negative numbers, 0 and 1 are not perfect numbers
    if (num <= 1)
        return false;

    // Find sum of proper divisors
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return (sum == num);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Negative numbers cannot be Perfect Numbers";
        return 0;
    }
  
    if (isPerfect(num))
        cout << num << " is a Perfect Number";
    else
        cout << num << " is not a Perfect Number";

    return 0;
}
