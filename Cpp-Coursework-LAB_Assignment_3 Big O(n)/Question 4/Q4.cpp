#include <iostream>
using namespace std;

// The overall Big O of the code is O(1)

void print_pattern() {
    for (int i = 0; i < 3; i++) {  // O(1)
        for (int j = 0; j < 10; j++) {  // O(1)
            if (j % 2 == 0) {  // O(1)
                cout << "X";  // O(1)
            } else {
                cout << "O";  // O(1)
            }
        }
        cout << endl;  // O(1)
        for (int j = 0; j < 2; j++) {  // O(1)
            cout << "OXO" << endl;  // O(1)
        }
    }
}

int main() {
    print_pattern();  // O(1)
    return 0;  // O(1)
}
