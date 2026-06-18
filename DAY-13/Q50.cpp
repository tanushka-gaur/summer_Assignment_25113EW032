// Program to find sum and average of array 

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float avg;

    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << " = ";
        cin >> array[i];

        sum += array[i];
    }

    // Calculate average
    avg = (float)sum / n;

    cout << "\nSum of Array Elements = " << sum << endl;
    cout << "Average of Array Elements = " << avg << endl;

    return 0;
}
