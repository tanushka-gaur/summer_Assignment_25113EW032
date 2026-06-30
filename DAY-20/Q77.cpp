// Program to Multiply Two Matrices

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

    int first[10][10], second[10][10], result[10][10];

    // Input first matrix
    cout << "\nEnter First Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> first[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter Second Matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> second[i][j];
        }
    }

    // Multiply matrices
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < cols; k++)
            {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Display result
    cout << "\nResult Matrix:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}