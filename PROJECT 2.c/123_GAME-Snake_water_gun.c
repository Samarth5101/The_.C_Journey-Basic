#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you, char computer)
{
    //return 1 if you win, return -1 if computer win and return 0 if the game draws

    //condition for game draw : ss, gg and ww

    if (you == computer)
    {
        return 0;
    }
    
    //conditions for non-drawing of game: sg, gs, sw, ws, wg and gw

    if (you == 's' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' && computer == 's')
    {
        return 1;
    }
    
    if (you == 's' && computer == 'w')
    {
        return 1;
    }
    else if (you == 'w' && computer == 's')
    {
        return -1;
    }
    
    if (you == 'w' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' && computer == 'w')
    {
        return 1;
    }
}

int main()
{
    char you, computer;
    srand(time(0));
    int number = rand() % 100 + 1;
    
    if (number<33)
    {
        computer = 's';    
    }
    else if (number>33 && number<66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }
    
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);

    int result = snakewatergun(you, computer);
    
    if (result == 0)
    {
        printf("Game Draw\n");
    }
    else if (result == 1)
    {
        printf("You win\n");
    }
    else
    {
        printf("You lose\n");
    }

    printf("You choosed %c and computer choosed %c.", you, computer);
    return 0;
}