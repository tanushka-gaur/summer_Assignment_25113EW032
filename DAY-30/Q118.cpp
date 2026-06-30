// Program to Create Mini Library System

#include <iostream>
using namespace std;

void display(char book[][30], char author[][30], int n)
{
    cout << "\n----- Library Books -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Book " << i + 1 << endl;
        cout << "Book Name = " << book[i] << endl;
        cout << "Author    = " << author[i] << endl;
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter Number of Books = ";
    cin >> n;

    char book[20][30];
    char author[20][30];

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book Name = ";
        cin.getline(book[i], 30);

        cout << "Enter Author Name = ";
        cin.getline(author[i], 30);
    }

    display(book, author, n);

    return 0;
}