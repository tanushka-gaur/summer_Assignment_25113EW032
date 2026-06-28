// Program to find LCM of two numbers

#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter number 1 = ";
    cin >> a;

    cout << "Enter number 2 = ";
    cin >> b;

    int lcm;

    for (int i = max(a, b); ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;

    return 0;
}
