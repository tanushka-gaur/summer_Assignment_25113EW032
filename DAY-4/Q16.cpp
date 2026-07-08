// Program to Print Armstrong numbers in a range

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int lower, upper;

    cout << "Enter Lower Limit: ";
    cin >> lower;

    while (lower < 0)
    {
        cout << "Lower Limit can't be negative\nEnter again => ";
        cin >> lower;
    }

    cout << "Enter Upper Limit: ";
    cin >> upper;

    cout << "Armstrong Number from " << lower << " to " << upper << ": ";

    for (int num = lower; num <= upper; num++)
    {
        int temp = num;
        int sum = 0;
        int num_digits = 0;
        int digit;

        /* loop for counting number of digits */
        while (temp != 0)
        {
            temp /= 10;
            num_digits++;
        }

        temp = num;

        while (temp != 0)
        {
            digit = temp % 10;
            sum += round(pow(digit, num_digits));
            temp /= 10;
        }

        if (sum == num)
        {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
