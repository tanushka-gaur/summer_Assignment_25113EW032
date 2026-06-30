// Program to Check Symmetric Matrix

#include <iostream>
using namespace std;

int main()
{
    int size;
    bool symmetric = true;

    // Input matrix size
    cout << "Enter size of square matrix = ";
    cin >> size;

    int matrix[10][10];

    // Input matrix
    cout << "\nEnter Matrix:\n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Check symmetry
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = false;
            }
        }
    }

    if (symmetric)
        cout << "\nMatrix is Symmetric";
    else
        cout << "\nMatrix is Not Symmetric";

    return 0;
}