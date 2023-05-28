#include <iostream>
using namespace std;

int main()

 // The overall Big O of the code is O(1)

 {
    // QUESTION 6(ii)
    for (int i = 1; i <= 5; i++) {      //O(5)
        for (int j = 1; j <= i; j++) {      //O(1)
            cout << "*";        //O(1)
        }
        cout << endl;       //O(1)
    }

    return 0;
}
