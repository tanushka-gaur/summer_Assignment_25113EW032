// Program to Create Library Management System

#include <iostream>
using namespace std;

int main()
{
    int bookId;
    char bookName[50];
    char author[50];
    int choice;

    // Menu
    cout << "===== LIBRARY MANAGEMENT SYSTEM =====\n";
    cout << "1. Add Book\n";
    cout << "2. Issue Book\n";
    cout << "3. Return Book\n";
    cout << "Enter Your Choice = ";
    cin >> choice;

    cin.ignore();

    // Input book details
    cout << "Enter Book ID = ";
    cin >> bookId;

    cin.ignore();

    cout << "Enter Book Name = ";
    cin.getline(bookName, 50);

    cout << "Enter Author Name = ";
    cin.getline(author, 50);

    // Display result
    if (choice == 1)
        cout << "\nBook Added Successfully";
    else if (choice == 2)
        cout << "\nBook Issued Successfully";
    else if (choice == 3)
        cout << "\nBook Returned Successfully";
    else
        cout << "\nInvalid Choice";

    cout << "\n\nBook ID = " << bookId;
    cout << "\nBook Name = " << bookName;
    cout << "\nAuthor = " << author;

    return 0;
}