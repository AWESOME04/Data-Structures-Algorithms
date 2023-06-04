#include <iostream>
using namespace std;

double power(double base, int exponent) {
    if (exponent == 0)
        return 1.0;
    else if (exponent == 1)
        return base;
    else if (exponent % 2 == 0) {
        double result = power(base, exponent / 2);
        return result * result;
    } else {
        double result = power(base, (exponent - 1) / 2);
        return base * result * result;
    }
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << result << endl;

    return 0;
}


