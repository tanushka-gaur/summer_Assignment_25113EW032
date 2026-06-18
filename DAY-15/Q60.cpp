// Program to Move Zeroes to the End of an Array

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

    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[position] = arr[i];
            position++;
        }
    }

    // Fill remaining positions with zeroes
    while (position < n)
    {
        arr[position] = 0;
        position++;
    }

    cout << "\nArray after moving zeroes to end = ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
