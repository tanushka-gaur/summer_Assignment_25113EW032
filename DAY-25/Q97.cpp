// Program to Merge Two Sorted Arrays

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    // Input first array size
    cout << "Enter First Array Length = ";
    cin >> n1;

    int first[100];

    // Input first array
    for (int i = 0; i < n1; i++)
    {
        cin >> first[i];
    }

    // Input second array size
    cout << "Enter Second Array Length = ";
    cin >> n2;

    int second[100];

    // Input second array
    for (int i = 0; i < n2; i++)
    {
        cin >> second[i];
    }

    cout << "Merged Array = ";

    int i = 0, j = 0;

    // Merge both arrays
    while (i < n1 && j < n2)
    {
        if (first[i] < second[j])
        {
            cout << first[i] << " ";
            i++;
        }
        else
        {
            cout << second[j] << " ";
            j++;
        }
    }

    // Print remaining elements
    while (i < n1)
    {
        cout << first[i] << " ";
        i++;
    }

    while (j < n2)
    {
        cout << second[j] << " ";
        j++;
    }

    return 0;
}