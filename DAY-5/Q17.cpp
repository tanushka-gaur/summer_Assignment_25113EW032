#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    // Take input from user 
    cout << "Enter a number: ";
    cin >> num;

    // Finding factors 
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i; // adding the factors 
        }
    }
  
    // Display the result 
    if (sum == num)
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}
