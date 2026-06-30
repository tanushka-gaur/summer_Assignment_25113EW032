// Mini Project using Arrays, Strings and Functions

#include <iostream>
using namespace std;

void input(char name[][30], int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();

        cout << "\nEnter Name = ";
        cin.getline(name[i], 30);

        cout << "Enter Marks = ";
        cin >> marks[i];
    }
}

void display(char name[][30], int marks[], int n)
{
    cout << "\n----- Student Details -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Name  = " << name[i] << endl;
        cout << "Marks = " << marks[i] << endl;
        cout << endl;
    }
}

void topper(char name[][30], int marks[], int n)
{
    int max = marks[0];
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
            index = i;
        }
    }

    cout << "\nTopper = " << name[index];
    cout << "\nMarks = " << max;
}

int main()
{
    int n;

    cout << "Enter Number of Students = ";
    cin >> n;

    char name[20][30];
    int marks[20];

    input(name, marks, n);

    display(name, marks, n);

    topper(name, marks, n);

    return 0;
}