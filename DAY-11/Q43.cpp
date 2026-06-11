// function to check whether a number is prime or not


#include <iostream>
using namespace std;

// Function to check prime number
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime Number";
    else
        cout << num << " is not a Prime Number";

    return 0;
}
