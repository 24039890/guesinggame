#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int guessnnumber[6], machineGnumbr[6];

    srand(time(0)); // Initialize random number generator

    bool tryagain = true;

    while (tryagain == true) {
        // Generate 6 random numbers between 1 and 36
        for (int i = 0; i < 6; i++) {
            machineGnumbr[i] = rand() % 36 + 1; // Random number between 1 and 36
        }

        cout << "Enter the 6 numbers you want to guess from 1-36:\n";
        // Input 6 guessed numbers
        for (int i = 0; i < 6; i++) {
            cin >> guessnnumber[i];
            // Check if the number is within the valid range
            if (guessnnumber[i] < 1 || guessnnumber[i] > 36) {
                cout << "Invalid number. Please enter numbers between 1 and 36.\n";
                return 1; // Exit if invalid input is detected
            }
        }

        int correctnumberguessed = 0;

        // Check how many numbers are correct
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (guessnnumber[i] == machineGnumbr[j]) {
                    correctnumberguessed++;
                }
            }
        }

        // Display the number of correct guesses
        if (correctnumberguessed > 0) {
            cout << "You guessed " << correctnumberguessed << " number(s) correctly.\n";
        } else {
            cout << "You guessed no numbers correctly.\n";
        }

        cout << "The machine's numbers were: ";
        for (int i = 0; i < 6; i++) {
            cout << machineGnumbr[i] << " ";
        }
        cout << endl;

        // Ask user if they want to try again
        cout << "Do you want to try again? (1 for yes, 0 for no): ";
        cin >> tryagain;

    }

    return 0;
}
