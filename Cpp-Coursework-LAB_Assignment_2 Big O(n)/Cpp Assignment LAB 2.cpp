#include <iostream>
using namespace std;


// The overall Big O of the code is O(1)

int main() {
  cout << "This is a student score collector program." << endl;  // O(1)
  string StudentName;  // O(1)
  cout << "Enter your name - ";  // O(1)
  cin >> StudentName;  // O(1)

  int test_score_1;  // O(1)
  int test_score_2;  // O(1)
  int test_score_3;  // O(1)
  int test_score_4;  // O(1)
  int test_score_5;  // O(1)

  cout << "Enter English score" << endl;  // O(1)
  cin >> test_score_1;  // O(1)

  cout << "Enter Mathematics score" << endl;  // O(1)
  cin >> test_score_2;  // O(1)

  cout << "Enter Science score" << endl;  // O(1)
  cin >> test_score_3;  // O(1)

  cout << "Enter History score" << endl;  // O(1)
  cin >> test_score_4;  // O(1)

  cout << "Enter Biology score" << endl;  // O(1)
  cin >> test_score_5;  // O(1)

  int sum = test_score_1 + test_score_2 + test_score_3 + test_score_4 + test_score_5;  // O(1)
  cout << "Sum is: " << sum << endl;  // O(1)
  int average = sum / 5;  // O(1)
  cout << "Average is: " << average << endl;  // O(1)

  switch (average / 10) {  // O(1)
    case 10:
    case 9:
      cout << "Grade: A" << endl;  // O(1)
      break;
    case 8:
      cout << "Grade: B" << endl;  // O(1)
      break;
    case 7:
      cout << "Grade: C" << endl;  // O(1)
      break;
    case 6:
      cout << "Grade: D" << endl;  // O(1)
      break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      cout << "GRADE F" << endl;  // O(1)
      break;
    default:
      cout << "Invalid grade." << endl;  // O(1)
  }

  return 0;  // O(1)
}
