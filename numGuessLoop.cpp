// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 22, 2025
// This program asks the user for the user number guess.
// It then decides if the guess is correct and allows multiple guesses.

#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()
#include <iostream>
#include <string>

int main() {
    std::srand(std::time(0));
    int correct_number = std::rand() % 10;  // Random number between 0 and 9

    std::string input;
    int guess;

    while (true) {
        std::cout << "Guess the number (0 to 9): ";
        std::cin >> input;

        int i = 0;
        while (i < input.length()) {
            if (input[i] < '0' || input[i] > '9') {
                break;
            }
            i++;
        }

        if (i == input.length()) {
            guess = std::stoi(input);

            if (guess == correct_number) {
                std::cout << "You guessed it right!\n";
                break;
            } else {
                std::cout << "Wrong guess, try again.\n";
            }
        } else {
            std::cout << "Invalid input! Please enter a whole number.\n";
        }
    }

    return 0;
}
