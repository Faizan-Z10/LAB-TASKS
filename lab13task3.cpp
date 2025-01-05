#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;
int main() {
    srand(time(0)); 
    int randomNumber = rand() % 100 + 1;  
    int userGuess = 0;  
    cout << "Welcome to 'Guess the Winning Number'!" << endl;
    cout << "I have chosen a random number between 1 and 100." << endl;
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        if (userGuess > randomNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        } else if (userGuess < randomNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number!" << endl;
        }
    }

    return 0;
}