#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO: Keep track of the number of attempts
// TODO: Add a feature to restart the game.
void play(int guess,int secretNumber,int count){
         printf("Guess the Number Game (1 to 100)\n");
         do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
            count++;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
            count++;
        } else {
            printf("Congratulations! You guessed it.\n");
            count++;
        }
    } while (guess != secretNumber);
    printf("number of attempts =%d\n",count);}

    

int main() {
    int num;
    do{
    int secretNumber, guess;
    int count=0;
    srand(time(0));
    secretNumber = rand() % 100 + 1;
    printf("Enter 1 to play the game\nEnter 0 to exit the game\n");
    scanf("%d",&num);
    if(num==1){
        play(guess,secretNumber,count);}
    else{
        printf("the game is ended\n");
    }}while(num==1);
    return 0;
}

