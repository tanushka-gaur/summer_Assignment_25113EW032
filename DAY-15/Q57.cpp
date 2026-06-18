// Program to Reverse an Array

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Array Length = ";
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << "\nReversed Array = ";

    // Display array in reverse order
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
