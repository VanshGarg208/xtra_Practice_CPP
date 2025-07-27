// QUESTION :  Dice GameSimulator
// Write a C++ program that:
// Simulates rolling two dice using random numbers (1-6)
// Uses if-else statements to determine winning conditions:
// Snake Eyes: Both dice show 1 (lose all points)
// Lucky Seven: Sum equals 7 (double points)
// Double: Both dice same (bonus 10 points)
// Normal: Add sum to score
// Uses a for loop to play multiple rounds
// Tracks and displays running score


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  

    int rounds, score = 0;

    cout << "==== DICE GAME ====\n";
    cout << "Enter number of rounds: ";
    cin >> rounds;

    for (int i = 1; i <= rounds; i++) {
        cout << "\nRound " << i << ": Rolling Dice...\n";

        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;

        cout << "Dice 1: " << dice1 << ", Dice 2: " << dice2 << endl;
        cout << "Sum: " << sum << " - ";

        if (dice1 == 1 && dice2 == 1) {
            cout << "SNAKE EYES! All points lost!\n";
            score = 0;
        } 
        else if (sum == 7) {
            cout << "LUCKY SEVEN! Double points!\n";
            score += sum * 2;
        } 
        else if (dice1 == dice2) {
            cout << "DOUBLE! Bonus points!\n";
            score += sum + 10;
        } 
        else {
            cout << "Normal\n";
            score += sum;
        }

        cout << "Score: " << score << endl;
    }

    cout << "\nFinal Score: " << score << endl;

    return 0;
}