// Program to Find Largest and Smallest Element in Array

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];

    // Take input of array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << " = ";
        cin >> array[i];
    }

    // Assume first element is largest and smallest
    int largest = array[0];
    int smallest = array[0];

    // Find largest and smallest element
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
            largest = array[i];

        if (array[i] < smallest)
            smallest = array[i];
    }

    cout << "\nLargest Element = " << largest << endl;
    cout << "Smallest Element = " << smallest << endl;

    return 0;
}
