include <iostream>
using namespace std;

int main()
{
    int n;
    int firstterm = 0, secondterm = 1, newterm;

    // Take input from user
    cout << "Enter the value of n = ";
    cin >> n;

    if (n == 0)
    {
        cout << firstterm;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        newterm = firstterm + secondterm;

        firstterm = secondterm;
        secondterm = newterm;
    }
    // Display the output
    cout << "Nth Fibonacci term = " << firstterm;

    return 0;
 
}
