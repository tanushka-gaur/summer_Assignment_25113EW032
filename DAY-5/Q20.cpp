// Program to find largest prime factor

#include <iostream>
using namespace std;

int main()
{
    int num, largestPrime = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            int prime = 1;

            // Check if factor is prime
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime == 1)
            {
                largestPrime = i;
            }
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}
