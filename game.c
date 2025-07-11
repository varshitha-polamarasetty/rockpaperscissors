#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice() {
    return rand() % 3; // 0 - Rock, 1 - Paper, 2 - Scissors
}

void printChoice(int choice) {
    switch (choice) {
        case 0: printf("Rock"); break;
        case 1: printf("Paper"); break;
        case 2: printf("Scissors"); break;
    }
}

int main() {
    int user, computer;

    srand(time(0)); // Seed random number generator

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("0: Rock\n1: Paper\n2: Scissors\n> ");
    scanf("%d", &user);

    if (user < 0 || user > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }

    computer = getComputerChoice();

    printf("You chose: ");
    printChoice(user);
    printf("\nComputer chose: ");
    printChoice(computer);
    printf("\n");

    if (user == computer) {
        printf("It's a draw!\n");
    } else if ((user == 0 && computer == 2) ||
               (user == 1 && computer == 0) ||
               (user == 2 && computer == 1)) {
        printf("🎉 You win!\n");
    } else {
        printf("😢 You lose!\n");
    }

    return 0;
}
