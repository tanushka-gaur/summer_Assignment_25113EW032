// program to count digits in a number

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    // Take input from the user
    cout << "Enter a number: ";
    cin >> num;


    if (num == 0) count = 1;

    else
    {   
        // Count digits by repeatedly dividing the number by 10
        while (num != 0)
        {
            num = num / 10;  // Remove the last digit
            count++;         // Increase digit count
        }
        
    }    

    // Display the total number of digits
    cout << "Number of digits = " << count;

    return 0;
}
