// function to find maximum Number among given number


#include <iostream>
using namespace std;

// Function to find maximum number
int findMax(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Maximum Number = " << findMax(num1, num2, num3) << endl;

    return 0;
}
