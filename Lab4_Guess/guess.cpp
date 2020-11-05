// Choose a number, plays higher or lower with the user
// Program #4 Guessing Game
// James Meyer
// 9/13/19

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	srand(time (0));
	int number;
	int guesses = 5;

	number = rand() % 100 + 1;
	int guess;
		do {
			cout << "Your Guess? "; 
			cin >> guess;
			if (guess < number) {
				cout << "Your guess is less than the nunber" << endl;
				--guesses;
				cout << guesses << " Guesses Left" << endl;
			}
			else if (guess > number) {
				cout << "Your guess is more than the number" << endl;
				--guesses;
				cout << guesses << " Guesses Left" << endl;
			}
			else
				cout << "Your guess is correct" << endl;
		} while (guesses != 0);
		cout << "You failed" << endl;
}