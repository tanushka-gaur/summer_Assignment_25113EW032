// Program to Find Maximum Frequency Element in an Array

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input array size
    cout << "Enter Array Length = ";
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr[i];
    }

    int maxFreq = 0;
    int maxElement = arr[0];

    // Find frequency of each element
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        // Count occurrences of current element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // Update maximum frequency and element
        if (count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "\nMaximum Frequency Element = " << maxElement;
    cout << "\nFrequency = " << maxFreq;

    return 0;
}
