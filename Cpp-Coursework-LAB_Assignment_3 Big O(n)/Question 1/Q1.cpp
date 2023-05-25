#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

 // The overall Big O of the code is O(1)
{
  srand(time(0));       //O(1)
  int targets = rand() % 100 + 1;       //O(1)
  int guess = 0;        //O(1)
  int no_attempts = 0;  //O(1)

  cout << "The Number Guessing Game" << endl;       //O(1)
  cout << "A number is chosen between 1 and 100. Can you guess the number?" << endl;    //O(1)

  do {
    cout << "Enter your guess for any number between 1 and 100: ";  //O(1)
    cin >> guess;   //O(1)
    ++no_attempts;  //O(1)

    if (guess > targets) {

      cout << "Number is too high. Try again." << endl; //O(1)
    } else if (guess < targets) {
      cout << "Number is too low. Try again." << endl;  //O(1)
    } else {
      cout << "Good Job! You found the number in " << no_attempts << " attempts." << endl;  //O(1)
    }
  } while (guess != targets);   //O(1)

  return 0; //O(1)
}

