// Program to Find Transpose of a Matrix

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter number of rows = ";
    cin >> rows;

    cout << "Enter number of columns = ";
    cin >> columns;

    int matrix[rows][columns];

    // Input matrix
    cout << "\nEnter Matrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Display transpose
    cout << "\nTranspose Matrix:\n";

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}