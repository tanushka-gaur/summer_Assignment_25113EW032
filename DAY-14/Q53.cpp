// Program for Linear Search

#include <iostream>
using namespace std;

int main()
{
    int n, element;

    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << " = ";
        cin >> array[i];
    }

    // Element to search
    cout << "Enter element to search = ";
    cin >> element;

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            cout << element << " found at position " << (i + 1);
            return 0;
        }
    }

    cout << element << " not found in the array";

    return 0;
}
