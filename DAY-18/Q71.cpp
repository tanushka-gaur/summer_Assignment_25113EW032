// Program for Binary Search

#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter Array Length = ";
    cin >> n;

    int arr[n];

    // Input sorted array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << "Enter element to search = ";
    cin >> key;

    int first = 0;
    int last = n - 1;
    int middle;

    while (first <= last)
    {
        middle = (first + last) / 2;

        if (arr[middle] == key)
        {
            cout << key << " found at position " << middle + 1;
            return 0;
        }
        else if (key > arr[middle])
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }

    cout << key << " not found";

    return 0;
}