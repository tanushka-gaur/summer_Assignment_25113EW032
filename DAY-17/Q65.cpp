// Program to Merge Two Arrays

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

    int merged[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    cout << "\nMerged Array = ";

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}
