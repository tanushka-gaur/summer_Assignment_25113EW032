// Program to Find Column-wise Sum

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Input matrix size
    cout << "Enter number of rows = ";
    cin >> rows;

    cout << "Enter number of columns = ";
    cin >> cols;

    int matrix[10][10];

    // Input matrix
    cout << "\nEnter Matrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Find sum of each column
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;

        for (int i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}