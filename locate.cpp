#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    int lowerBound = 1;
    int upperBound = 100;
    int randomNumber = std::rand() % (upperBound - lowerBound + 1) + lowerBound;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between " << lowerBound << " and " << upperBound << "." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < lowerBound || guess > upperBound) {
            std::cout << "Please guess a number within the range!" << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << randomNumber << " in " << attempts << " attempts!" << std::endl;
        }
    } while (guess != randomNumber);

    return 0;
}