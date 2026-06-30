// Program to Create Contact Management System

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    char phone[15];
    char email[50];

    // Input contact details
    cout << "Enter Contact Name = ";
    cin.getline(name, 50);

    cout << "Enter Phone Number = ";
    cin.getline(phone, 15);

    cout << "Enter Email ID = ";
    cin.getline(email, 50);

    // Display contact details
    cout << "\n====== CONTACT DETAILS ======\n";
    cout << "Name = " << name << endl;
    cout << "Phone = " << phone << endl;
    cout << "Email = " << email << endl;

    return 0;
}