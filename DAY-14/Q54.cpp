//Program to Find Frequency of an Element in an Array

#include <iostream>
using namespace std;

int main()
{
    int n, key, count = 0;

    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << " = ";
        cin >> array[i];
    }

    // Enter element whose frequency is to be found
    cout << "Enter element to find frequency = ";
    cin >> key;

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
            count++;
    }

    cout << "Frequency of " << key << " = " << count;

    return 0;
}
