#include <iostream>
using namespace std;

int main()

// The overall Big O of the code is O(1)

{
    // QUESTION 3
    // Program to check whether the given number is even or odd
    int num;        //O(1)
    cout << "Enter a number: ";     //O(1)
    cin >> num;     //O(1)

    // Using ternary operator
    (num % 2 == 0) ? cout << num << " is even." : cout << num << " is odd.";        //O(1)

    return 0;       //O(1)
}

