#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));

    int userChoice, compChoice;

    std::cout <<'\n'<< "********** Rock, Paper, Scissors **********\n";

    do {
        std::cout << "\nEnter 1 for Rock, 2 for Paper, 3 for Scissors (or 0 to Quit): ";
        std::cin >> userChoice;

        if (userChoice == 0) {
            std::cout << "Thanks for playing!\n";
            break; 
        }

        if (userChoice < 1 || userChoice > 3) {
            std::cout << "Invalid choice! Please enter 1, 2, 3, or 0.\n";
            continue;
        }

        compChoice = (rand() % 3) + 1;

        std::cout <<'\n' << "Computer chose: ";
        if (compChoice == 1){
            std::cout << "Rock\n";
        }else if (compChoice == 2){
            std::cout << "Paper\n";
        }
        else std::cout << "Scissors\n";

        if (userChoice == compChoice) {
            std::cout << "Result: It's a tie!\n";
        } 
        else if ((userChoice == 1 && compChoice == 3)||(userChoice == 2 && compChoice == 1)||(userChoice == 3 && compChoice == 2)){
            std::cout << "Result: You win!\n";
        } 
        else {
            std::cout << "Result: Computer wins!\n";
        }

    } while (userChoice != 0);

    std::cout << "*******************************************\n";

    return 0;
}