// Program to Find Missing Number in an Array
// (Array contains numbers from 1 to n with one number missing)

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, totalSum;

    // Input the value of n
    cout << "Enter value of n = ";
    cin >> n;

    int arr[n - 1];

    // Input array elements and calculate their sum
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr[i];

        sum += arr[i];
    }

    // Calculate sum of numbers from 1 to n
    totalSum = n * (n + 1) / 2;

    // Missing number = Expected Sum - Actual Sum
    cout << "Missing Number = " << totalSum - sum;

    return 0;
}
