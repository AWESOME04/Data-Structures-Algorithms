#include <iostream>
using namespace std;

int main() {

     // The overall Big O of the code is O(1)
    // QUESTION 6(i)
    for (int i = 0; i < 4; i++) {   //O(4)
        for (int j = 0; j < 10; j++) {      //O(10)
            cout << "*";        //O(1)
        }
        cout << endl;       //O(1)
    }
    return 0;       //O(1)
}

