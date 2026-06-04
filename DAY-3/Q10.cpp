#include <iostream>
using namespace std;

int main()
{
    int start, end, num, i, count;

    // Take the starting and ending numbers from the user
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are: ";

    // Check every number in the given range
    for (num = start; num <= end; num++)
    {
        count = 0;

        // Skip numbers less than or equal to 1
        if (num <= 1)
            continue;

        // Check if the current number is divisible by any number
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }

        // If no divisor is found, print the number
        if (count == 0)
            cout << num << " ";
    }

    return 0;
}