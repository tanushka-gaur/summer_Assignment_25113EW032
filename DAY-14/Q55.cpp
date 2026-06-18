// Program to find the second largest element in an array

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input array length
    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << i + 1 << " = ";
        cin >> array[i];
    }

    // Assume first element is largest and second largest
    int largest = array[0];
    int secondLargest = array[0];

    // Find largest element
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    // Find second largest element
    for (int i = 0; i < n; i++)
    {
        if (array[i] > secondLargest && array[i] < largest)
        {
            secondLargest = array[i];
        }
    }

    cout << "\nSecond Largest Element = " << secondLargest;

    return 0;
}
