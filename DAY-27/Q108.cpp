// Program to Create Marksheet Generation System

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int roll;
    int english, maths, science;
    int total;
    float percentage;
    char grade;

    // Input student details
    cout << "Enter Student Name = ";
    cin.getline(name, 50);

    cout << "Enter Roll Number = ";
    cin >> roll;

    cout << "Enter English Marks = ";
    cin >> english;

    cout << "Enter Maths Marks = ";
    cin >> maths;

    cout << "Enter Science Marks = ";
    cin >> science;

    // Calculate total and percentage
    total = english + maths + science;
    percentage = total / 3.0;

    // Find grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display marksheet
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << roll << endl;
    cout << "English    : " << english << endl;
    cout << "Maths      : " << maths << endl;
    cout << "Science    : " << science << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;

    if (percentage >= 40)
        cout << "Result     : Pass";
    else
        cout << "Result     : Fail";

    return 0;
}