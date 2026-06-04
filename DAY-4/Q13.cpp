// Write a program to Generate Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int n, firstterm = 0, secondterm = 1, newterm;

    // Take input from user 
    cout << "Enter the number of terms = ";
    cin >> n;

    cout << "fibonacci series upto " << n << " terms is: \n";

    for (int i = 0; i < n; i++)
    {
        cout << firstterm << " ";
      
        newterm = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = newterm;
    }

    cout << endl;
    return 0;
}
