#include <iostream>
using namespace std;

// The overall Big O of the code is O(n)

double power(double n, int p = 2) {
    double result = 1;
    for (int i = 0; i < p; i++) {  // O(n)
        result *= n;  // O(1)
    }
    return result;  // O(1)
}

int main() {
    double n;  // O(1)
    int p;  // O(1)
    cout << "Enter a number: ";  // O(1)
    cin >> n;  // O(1)
    cout << "Enter the power (optional, default is 2): ";  // O(1)
    if (!(cin >> p)) {  // O(1)
        p = 2;  // O(1)
        cin.clear();  // O(1)
        cin.ignore(1000, '\n');  // O(1)
    }
    cout << n << " raised to the power of " << p << " is " << power(n, p) << endl;  // O(1)
    return 0;  // O(1)
}
