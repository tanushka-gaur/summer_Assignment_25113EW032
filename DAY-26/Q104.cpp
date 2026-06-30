// Program to Create Quiz Application

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char answer;

    // Question 1
    cout << "1. Capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\nc) Chennai\n";
    cin >> answer;

    if (answer == 'a')
    {
        score++;
    }

    // Question 2
    cout << "\n2. 5 + 3 = ?\n";
    cout << "a) 6\nb) 8\nc) 10\n";
    cin >> answer;

    if (answer == 'b')
    {
        score++;
    }

    // Question 3
    cout << "\n3. C++ was developed by?\n";
    cout << "a) Dennis Ritchie\nb) Bjarne Stroustrup\nc) James Gosling\n";
    cin >> answer;

    if (answer == 'b')
    {
        score++;
    }

    // Display score
    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}