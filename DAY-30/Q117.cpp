// Program to Create Student Record System

#include <iostream>
using namespace std;

void display(char name[][30], int roll[], int marks[], int n)
{
    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Name  = " << name[i] << endl;
        cout << "Roll  = " << roll[i] << endl;
        cout << "Marks = " << marks[i] << endl;
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter Number of Students = ";
    cin >> n;

    char name[20][30];
    int roll[20];
    int marks[20];

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number = ";
        cin >> roll[i];

        cin.ignore();

        cout << "Enter Name = ";
        cin.getline(name[i], 30);

        cout << "Enter Marks = ";
        cin >> marks[i];
    }

    display(name, roll, marks, n);

    return 0;
}