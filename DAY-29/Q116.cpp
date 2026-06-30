// Program to Create Inventory Management System

#include <iostream>
using namespace std;

int main()
{
    int itemId, quantity;
    char itemName[50];
    float price, total;

    // Input item details
    cout << "Enter Item ID = ";
    cin >> itemId;

    cin.ignore();

    cout << "Enter Item Name = ";
    cin.getline(itemName, 50);

    cout << "Enter Quantity = ";
    cin >> quantity;

    cout << "Enter Price = ";
    cin >> price;

    // Calculate total cost
    total = quantity * price;

    // Display inventory details
    cout << "\n====== INVENTORY DETAILS ======\n";
    cout << "Item ID      : " << itemId << endl;
    cout << "Item Name    : " << itemName << endl;
    cout << "Quantity     : " << quantity << endl;
    cout << "Price        : " << price << endl;
    cout << "Total Amount : " << total << endl;

    return 0;
}