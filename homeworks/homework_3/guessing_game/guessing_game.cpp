#include <iostream>
#include <random>

using namespace std;

int main() {
  cout << "Welcome to the GUESSING GAME!" << endl;
  cout << "I will generate a number and you will guess it!" << endl;
  int min_number, max_number;
  cout << "Please provide the smallest number: " << endl;
  cin >> min_number;
  cout << "Please provide the largest number: " << endl;
  cin >> max_number;

  random_device random_device;
  mt19937 random_engine{random_device()};
  uniform_int_distribution<> distribution{min_number, max_number};
  int rand = distribution(random_engine);
  cout << "I've generated a number. Try to guess it!" << endl;

  int guess;
  int tries = 0;
  while (true) {
    ++tries;
    cout << "Please provide the next guess:";
    cin >> guess;
    if (guess < rand) {
      cout << "Your number is too small. Try again!" << endl;
    } else if (guess > rand) {
      cout << "Your number is too big. Try again!" << endl;
    } else {
      cout << "You've done it! You guessed the number" << rand << " in "
           << tries << " guesses!'" << endl;
      ;
    }
  }

  return 0;
}