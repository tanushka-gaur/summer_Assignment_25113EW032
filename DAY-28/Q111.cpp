// Program to Create Ticket Booking System

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int tickets;
    int price = 500;
    int total;

    // Input details
    cout << "Enter Passenger Name = ";
    cin.getline(name, 50);

    cout << "Enter Number of Tickets = ";
    cin >> tickets;

    // Calculate total amount
    total = tickets * price;

    // Display ticket details
    cout << "\n====== TICKET DETAILS ======\n";
    cout << "Passenger Name = " << name << endl;
    cout << "Ticket Price = " << price << endl;
    cout << "Tickets Booked = " << tickets << endl;
    cout << "Total Amount = " << total << endl;
    cout << "Booking Successful";

    return 0;
}