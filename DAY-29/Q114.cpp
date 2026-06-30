// Program to Create Menu-Driven Array Operations

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int choice;

    // Input array
    cout << "Enter Array Length = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << " = ";
        cin >> arr[i];
    }

    // Display menu
    cout << "\n====== ARRAY OPERATIONS ======\n";
    cout << "1. Display Array\n";
    cout << "2. Find Sum\n";
    cout << "3. Find Largest Element\n";

    cout << "Enter Choice = ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Array = ";

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else if (choice == 2)
    {
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        cout << "Sum = " << sum;
    }
    else if (choice == 3)
    {
        int largest = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
                largest = arr[i];
        }

        cout << "Largest Element = " << largest;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}