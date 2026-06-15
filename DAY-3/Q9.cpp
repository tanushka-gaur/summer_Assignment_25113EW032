// Program to check whether a number is prime

#include <iostream>
using namespace std;

int main() 
{
    int num;
    bool flag = true;

    // Take input number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Numbers less than 2 are not prime
    if (num < 2) 
    {
        cout << "(Negative/Zero/One) These are not Prime Number";
        return 0;
    } 
    else 
    {
        // Check divisibility of number
        for (int i = 2; i <= num/2 ; i++) 
        {
            if (num % i == 0) 
            {
                flag = false;
                break;
            }
        }
    }

    // If there is no other divisor except 1 and the number itself then given number is prime
    if (flag)
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}
