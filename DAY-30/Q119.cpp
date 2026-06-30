// Program to Create Mini Employee Management System

#include <iostream>
using namespace std;

void display(char name[][30], int id[], float salary[], int n)
{
    cout << "\n----- Employee Details -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;
        cout << "ID     = " << id[i] << endl;
        cout << "Name   = " << name[i] << endl;
        cout << "Salary = " << salary[i] << endl;
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter Number of Employees = ";
    cin >> n;

    char name[20][30];
    int id[20];
    float salary[20];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID = ";
        cin >> id[i];

        cin.ignore();

        cout << "Enter Employee Name = ";
        cin.getline(name[i], 30);

        cout << "Enter Salary = ";
        cin >> salary[i];
    }

    display(name, id, salary, n);

    return 0;
}