#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void guessingGame() {
    srand(static_cast<unsigned int>(time(0))); 

    int lowerLimit = 1;
    int upperLimit = 100;
    int secret = generateRandomNumber(lowerLimit, upperLimit);
    int userGuess = 0;
    int attempts = 0;

    cout << "===== Welcome to the Guessing Challenge! =====" << endl;
    cout << "Guess the number between " << lowerLimit << " and " << upperLimit << "." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess == secret) {
            cout << "🎉 Awesome! You guessed it in " << attempts << " tries!" << endl;
            break;
        } else if (userGuess < secret) {
            cout << "🔻 Too low. Try a higher number." << endl;
        } else {
            cout << "🔺 Too high. Try a lower number." << endl;
        }
    }

    cout << "Thanks for playing!" << endl;
}

int main() {
    guessingGame();
    return 0;
}
