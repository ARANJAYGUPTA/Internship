/* number guessing game*/
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I've selected a number between 1 and 100. Can you guess it?" << std::endl;

    // Loop until the user guesses the correct number 
    while (userGuess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess < randomNumber) {      
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else { 
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
        }
    }
    return 0;
    
}
