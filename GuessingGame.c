#include <stdio.h>

void main() {
printf(" _____                 _            _____\n");               
printf("|   __|_ _ ___ ___ ___|_|___ ___   |   __|___ _____ ___\n");
printf("|  |  | | | -_|_ -|_ -| |   | . |  |  |  | .'|     | -_|\n");
printf("|_____|___|___|___|___|_|_|_|_  |  |_____|__,|_|_|_|___|\n");

    int secretNumber = 42;
    int kick;
    int attempts = 3;

    for(int i = 1; i <= attempts; i++) // Loop
    {

        printf("Attempt %d de %d\n", i, attempts);
        printf("what's your kick: ");
        scanf("%d", &kick);
        printf("Your kick was %d\n", kick);

        int bigger = kick > secretNumber;
        int smaller = kick < secretNumber;

        if(kick == secretNumber) // Conditions
        {
            printf("You won\n");
            break; // Breaking the loop
        }

        else if(bigger)
        {
            printf("Your kick was bigger than the secret number\n");
        }
        else if (smaller)
        {
            printf("Your kick was less than the secret number\n");
        }

            printf("You lost, try again\n");
        }
    printf("Game Over");
}