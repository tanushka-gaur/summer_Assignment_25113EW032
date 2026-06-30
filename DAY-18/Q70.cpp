// Program to Sort an Array using Selection Sort

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

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "\nSorted Array = ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}