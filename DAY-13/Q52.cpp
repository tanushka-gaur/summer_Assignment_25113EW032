// Program to Count even and odd elements 

#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;

    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << " = ";
        cin >> array[i];
    }

    // Count even and odd elements
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "\nNumber of Even Elements = " << even << endl;
    cout << "Number of Odd Elements = " << odd << endl;

    return 0;
}
