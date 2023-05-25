#include <iostream>
using namespace std;

int main() {

    // The overall Big O of the code is O(1)

    // QUESTION 4
    /* Program which accepts days as integer and display total number of
    years, months and days in it */

    int days;       //O(1)
    cout << "Enter the number of days: ";       //O(1)
    cin >> days;        //O(1)

    int years = days / 365;     //O(1)
    int months = (days % 365) / 30;         //O(1)
    int remainingDays = (days % 365) % 30;      //O(1)

    cout << "Years: " << years << endl;     //O(1)
    cout << "Months: " << months << endl;       //O(1)
    cout << "Days: " << remainingDays << endl;      //O(1)

    return 0;       //O(1)
}
