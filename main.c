#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int nr_of_players = 0;
    printf("welcome to master YATZY Let's play!\n");
    printf("Enter number of players (2-6): ");

    if (scanf("%d", &nr_of_players) != 1)
    {
        printf("Enter a correct value!\n");
        return 1;

    }

    if (nr_of_players <2 || nr_of_players >6)
    {
        printf("Enter a number between 2 and 6!\n");
        return 1;
    }

    printf("Perfect! Now we need the names of all the players:\n");
    return 0;
}
