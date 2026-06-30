// Program to Create Salary Management System

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    float basic, hra, da, bonus, totalSalary;

    // Input details
    cout << "Enter Employee Name = ";
    cin.getline(name, 50);

    cout << "Enter Basic Salary = ";
    cin >> basic;

    // Calculate salary
    hra = basic * 0.20;
    da = basic * 0.10;
    bonus = basic * 0.05;

    totalSalary = basic + hra + da + bonus;

    // Display salary details
    cout << "\n========== SALARY DETAILS ==========\n";
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basic << endl;
    cout << "HRA           : " << hra << endl;
    cout << "DA            : " << da << endl;
    cout << "Bonus         : " << bonus << endl;
    cout << "Total Salary  : " << totalSalary << endl;

    return 0;
}