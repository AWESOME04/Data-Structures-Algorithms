#include <iostream>
using namespace std;

int main()

    // The overall Big O of the code is O(1)
 {
    // QUESTION 5
    /* Program that takes length as input in feet and inches and converts the
    lengths in centimeters */

    int feet, inches;       //O(1)
    cout << "Enter the length in feet: ";       //O(1)
    cin >> feet;        //O(1)
    cout << "Enter the length in inches: ";     //O(1)
    cin >> inches;      //O(1)

    double totalInches = (feet * 12) + inches;      //O(1)
    double centimeters = totalInches * 2.54;        //O(1)

    cout << "Length in centimeters: " << centimeters << endl;       //O(1)

    return 0;       //O(1)
}


