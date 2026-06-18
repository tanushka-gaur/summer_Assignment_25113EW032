// Program to Find Union of Two Arrays

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter First Array Length = ";
    cin >> n1;

    int arr1[n1];

    // Input first array
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr1[i];
    }

    cout << "Enter Second Array Length = ";
    cin >> n2;

    int arr2[n2];

    // Input second array
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr2[i];
    }

    cout << "\nUnion of Arrays = ";

    // Print first array
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }

    // Print only unique elements from second array
    for (int i = 0; i < n2; i++)
    {
        bool found = false;

        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << arr2[i] << " ";
        }
    }

    return 0;
}
