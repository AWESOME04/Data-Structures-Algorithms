#include <iostream>
using namespace std;

// The overall Big O of the code is O(1)

void showChoice()   //O(1){
    cout << "1. Addition" << endl;  //O(1)
    cout << "2. Subtraction" << endl;   //O(1)
    cout << "3. Multiplication" << endl;    //O(1)
    cout << "4. Division" << endl;  //O(1)
    cout << "Enter your choice (1-4): ";    //O(1)
}

int add(int num_1, int num_2)   //O(1){
    return num_1 + num_2;   //O(1)
}

int subtract(int num_1, int num_2) {
    return num_1 - num_2;
}

int multiply(int num_1, int num_2) //O(1){
    return num_1 * num_2;   //O(1)
}

int divide(int num_1, int num_2)    //O(1){
    return num_1 / num_2;   //O(1)
}

int main() {
    int choice; //O(1)
    int num_1;  //O(1)
    int num_2;  //O(1)
    showChoice();   //O(1)
    cin >> choice;  //O(1)
    cout << "Enter two numbers: ";  //O(1)
    cin >> num_1 >> num_2;  //O(1)
    switch (choice) //O(1){
        case 1:
            cout << "The sum of the numbers is: " << add(num_1, num_2) << endl; //O(1)
            break;  //O(1)
        case 2:
            cout << "The difference of the numbers is: " << subtract(num_1, num_2) << endl; //O(1)
            break;  //O(1)
        case 3:
            cout << "The product of the numbers is: " << multiply(num_1, num_2) << endl;    //O(1)
            break;  //O(1)
        case 4:
            cout << "The quotient of the numbers is: " << divide(num_1, num_2) << endl;     //O(1)
            break;  //O(1)
        default:
            cout << "Invalid choice or wrong inputs. Try again." << endl;   //O(1)
    }
    return 0;   //O(1)
}



