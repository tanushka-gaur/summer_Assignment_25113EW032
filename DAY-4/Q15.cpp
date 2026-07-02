// program to Check Armstrong number

#include <iostream>
#include <cmath>
using namespace std;

void check_arm(int num)
{

    if (num < 0)
    {
        cout << "Negative numbers cannot be Armstrong numbers\nTry again.\n";
        return;
    }

    int sum = 0;
    int num_digits = 0;
    int digit;

    int temp = num;

    // While loop for counting numbers of digits 
    while (temp != 0)
    {
        temp /= 10;
        num_digits++;
    }

    temp = num;

    // While loop for finding sum
    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    if (sum == num)
    {
        cout << num << " is Armstrong Number\n";
    }

    else
    {
        cout << num << " is not an Armstrong Number\n";
    }

    return;
}

int main()
{
    int n;

    cout << "ENTER NUMBER => ";
    cin >> n;

    check_arm(n);

    return 0;
}
