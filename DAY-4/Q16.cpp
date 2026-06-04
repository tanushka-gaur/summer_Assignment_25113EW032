// Program to Print Armstrong numbers in a range

#include <iostream>
using namespace std;

int main()
{
    int start, end, num, currentdigit, sum, temp;

    // Take input from user 
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (num = start; num <= end; num++)
    {
        sum = 0;
        temp = num;

        while (temp > 0)
        {
            currentdigit = temp % 10;
            sum = sum + (currentdigit * currentdigit * currentdigit);
            temp = temp / 10;
        }

        if (sum == num)
        {
          // Display the result 
          cout << num << " ";
        }
    }

    return 0;
}
