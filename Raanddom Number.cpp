#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Generate a random number between 1 and 100
    int randomnumber = rand() % 100 + 1;

    // Initialize variables
    int YourGuess;
    int time = 0;

    cout << "Welcome to the Guess the Number Game!\n";
    cout << "Try to guess the number between 1 and 100.\n\n";
	//using do_while loop for multiple guess
    do {
        // Get user input
        cout << "Enter your guess: ";
        cin >> YourGuess;

        // Check if the guess is too high, too low, or correct
        if (YourGuess > randomnumber) {
            cout << "Too high! Try again.\n";
        } else if (YourGuess < randomnumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number in " << time + 1 << " attempts.\n";
        }

        // Increment the number of attempts
        time++;

    } while (YourGuess != randomnumber);

    return 0;
}

