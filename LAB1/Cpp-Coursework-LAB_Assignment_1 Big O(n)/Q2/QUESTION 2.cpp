#include <iostream>

using namespace std;

int main()

// The overall Big O of the code is O(1)

{
    // QUESTION 2
    // Program which accepts a character and display its ASCII value
    char chr;           //O(1)
    cout << "Enter any character: ";        //O(1)
    cin >> chr;         //O(1)
    cout << "The ASCII value of " << chr << " is " << int(chr);         //O(1)

}

