// Program to Create Number Guessing Game

#include <iostream>
using namespace std;

int main()
{
    int secret = 25;
    int guess;

    // Keep asking until correct guess
    while (true)
    {
        cout << "Guess the number = ";
        cin >> guess;

        if (guess == secret)
        {
            cout << "Correct Guess!";
            break;
        }
        else if (guess < secret)
        {
            cout << "Guess a Bigger Number\n";
        }
        else
        {
            cout << "Guess a Smaller Number\n";
        }
    }

    return 0;
}