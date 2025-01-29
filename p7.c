#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int getComputerChoice(int computerChoice);
void showChoice(int choice);
void determineWinner(int playerChoice, int computerChoice);

int main() {
    int playerChoice, computerChoice;

    printf("Welcome to Stone-Paper-Scissors Game!\n");
    printf("Enter your choice:\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice! Please choose between 1 and 3.\n");
        return 0;
    }

    computerChoice = getComputerChoice(computerChoice);

    printf("\nYou chose: ");
    showChoice(playerChoice);
    printf("Computer chose: ");
    showChoice(computerChoice);

    determineWinner(playerChoice, computerChoice);

    return 0;
}

int getComputerChoice(int computerChoice) {
     srand(time(0));
    computerChoice = rand() %3 + 1;
    return computerChoice;

}
void showChoice(int choice) {
    printf("%d\n",choice);

}

void determineWinner(int playerChoice, int computerChoice) {
    if((playerChoice==1 && computerChoice==3 )|| (playerChoice==2 && computerChoice==1 )|| (playerChoice==3 && computerChoice==2)){
        printf("player wins\n");
    }
    if(playerChoice==computerChoice){
        printf("It's a draw\n");
    }
    else{ printf("you lose\n");}
    
}
