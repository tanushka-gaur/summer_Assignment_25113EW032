// Program to Create Employee Management System

#include <iostream>
using namespace std;

int main()
{
    int id;
    char name[50];
    char department[30];
    float salary;

    // Input employee details
    cout << "Enter Employee ID = ";
    cin >> id;

    cin.ignore();

    cout << "Enter Employee Name = ";
    cin.getline(name, 50);

    cout << "Enter Department = ";
    cin.getline(department, 30);

    cout << "Enter Salary = ";
    cin >> salary;

    // Display employee details
    cout << "\n========== EMPLOYEE DETAILS ==========\n";
    cout << "Employee ID : " << id << endl;
    cout << "Name        : " << name << endl;
    cout << "Department  : " << department << endl;
    cout << "Salary      : " << salary << endl;

    return 0;
}