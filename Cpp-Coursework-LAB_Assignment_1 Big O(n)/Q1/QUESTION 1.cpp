#include <iostream>

using namespace std;

int main()

// The overall Big O of the code is O(1)

{
    // QUESTION 1
    // Program which accepts a character and display its next character
    char input;             //O(1)
    cout << "Enter any character: " << endl;            //O(1)
    cin >> input;               //O(1)
    cout << "The next character is: " << char(input + 1) << endl;       //O(1)
    return 0;       //O(1)

}

