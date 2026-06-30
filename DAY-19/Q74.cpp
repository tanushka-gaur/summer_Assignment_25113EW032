// Program to Subtract Two Matrices

#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter number of rows = ";
    cin >> rows;

    cout << "Enter number of columns = ";
    cin >> columns;

    int firstMatrix[rows][columns];
    int secondMatrix[rows][columns];
    int result[rows][columns];

    // Input first matrix
    cout << "\nEnter First Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> firstMatrix[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter Second Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> secondMatrix[i][j];
        }
    }

    // Subtract second matrix from first matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    }

    // Display result
    cout << "\nDifference of Matrices:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}