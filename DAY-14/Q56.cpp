// Program to Find Duplicate Elements in an Array

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter Array Length = ";
    cin >> size;

    int numbers[size];

    // Input array elements
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << " = ";
        cin >> numbers[i];
    }

    cout << "\nDuplicate Elements are: ";

    // Check for duplicates
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[i] == numbers[j])
            {
                cout << numbers[i] << " ";
                break;
            }
        }
    }

    return 0;
}
