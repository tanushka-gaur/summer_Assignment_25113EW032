// Program to Find Pair with Given Sum

#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter Array Length = ";
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << "Enter Required Sum = ";
    cin >> sum;

    // Find pair with given sum
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Pair Found: "
                     << arr[i] << " and " << arr[j];
                return 0;
            }
        }
    }

    cout << "No Pair Found";

    return 0;
}
