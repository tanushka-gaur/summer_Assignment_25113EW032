// Program to Check Voting Eligibility

#include <iostream>
using namespace std;

int main()
{
    int age;

    // Input age
    cout << "Enter your age = ";
    cin >> age;

    // Check eligibility
    if (age >= 18)
    {
        cout << "You are Eligible to Vote";
    }
    else
    {
        cout << "You are Not Eligible to Vote";
    }

    return 0;
}