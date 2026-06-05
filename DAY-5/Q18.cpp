// Program to check strong number

#include <iostream>
using namespace std;

int main()
{
    int num, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0)
    {
        digit = num % 10;

        int fact = 1;

        // Find factorial
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == num)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}
