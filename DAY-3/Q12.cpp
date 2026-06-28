// Program to find LCM of two numbers

#include <iostream>
using namespace std;

int main() 
{
      int n1, n2;

    cout << "Enter number 1 = ";
    cin >> n1;

    cout << "Enter number 2 = ";
    cin >> n2;

    int lcm;

    for (int i = max(n1, n2);; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << "LCM of " << n1 << " and " << n2 << " => " << lcm << endl;

    return 0;
}
