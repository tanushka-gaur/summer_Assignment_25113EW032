// Program to Create Student Record Management System

#include <iostream>
using namespace std;

int main()
{
    int roll;
    char name[50];
    int age;
    char course[30];
    float marks;

    // Input student details
    cout << "Enter Roll Number = ";
    cin >> roll;

    cin.ignore();

    cout << "Enter Student Name = ";
    cin.getline(name, 50);

    cout << "Enter Age = ";
    cin >> age;

    cin.ignore();

    cout << "Enter Course = ";
    cin.getline(course, 30);

    cout << "Enter Marks = ";
    cin >> marks;

    // Display student details
    cout << "\n========== STUDENT RECORD ==========\n";
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    cout << "Course      : " << course << endl;
    cout << "Marks       : " << marks << endl;

    return 0;
}