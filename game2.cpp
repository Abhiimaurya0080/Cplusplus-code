#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

class Game {
public:
    Game() {
        std::srand(static_cast<unsigned int>(std::time(0)));
        playerScore = 0;
        computerScore = 0;
    }

    void play() {
        std::string playerChoice;
        std::cout << "Welcome to Rock, Paper, Scissors!\n";
        while (true) {
            std::cout << "Enter your choice (rock, paper, scissors) or 'exit' to quit: ";
            std::cin >> playerChoice;

            if (playerChoice == "exit") {
                break;
            }

            std::string computerChoice = getComputerChoice();
            std::cout << "Computer chose: " << computerChoice << "\n";
            determineWinner(playerChoice, computerChoice);
            displayScores();
        }
    }

private:
    int playerScore;
    int computerScore;

    std::string getComputerChoice() {
        int randomChoice = std::rand() % 3;
        switch (randomChoice) {
            case 0: return "rock";
            case 1: return "paper";
            case 2: return "scissors";
            default: return "";
        }
    }

    void determineWinner(const std::string& player, const std::string& computer) {
        if (player == computer) {
            std::cout << "It's a tie!\n";
        } else if ((player == "rock" && computer == "scissors") ||
                   (player == "paper" && computer == "rock") ||
                   (player == "scissors" && computer == "paper")) {
            std::cout << "You win!\n";
            playerScore++;
        } else {
            std::cout << "You lose!\n";
            computerScore++;
        }
    }

    void displayScores() {
        std::cout << "Scores - You: " << playerScore << ", Computer: " << computerScore << "\n";
    }
};

int main() {
    Game game;
    game.play();
    return 0;
}
