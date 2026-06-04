// Program to check whether a number is prime

#include <iostream>
using namespace std;

int main() 
{
    int num,i,count= 0;

    // Take input number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Numbers less than or equal to 1 are not prime
    if (num <= 1) 
    {
        cout << num << " is not a Prime Number";
    } 
    else 
    {
        // Check divisibility of number
        for (int i = 2; i < num; i++) 
        {
            if (num % i == 0) 
            {
                count++;
            }
        }
    }

    // If there is no other divisor except 1 and the number itself then given number is prime
    if (count==0)
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}