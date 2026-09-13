#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame {
    private:
        int numberToGuess;
        int userGuess;
        int attempts;  

    public:
        NumberGuessingGame() { 
            srand(time(0)); 
            numberToGuess = rand() % 100 + 1; 
            attempts = 0; 
        }

        void play() {
            cout << "Welcome to the Number Guessing Game!" << endl;
            cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

            do {
                cout << "Enter your guess: ";
                cin >> userGuess;
                attempts++;

                if (userGuess < numberToGuess) {
                    cout << "Too low! Try again." << endl;
                } else if (userGuess > numberToGuess) {
                    cout << "Too high! Try again." << endl;
                } else {
                    cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
                }
            } while (userGuess != numberToGuess);
        }
};

int main() {
    NumberGuessingGame game;
    game.play();
    return 0;
}
