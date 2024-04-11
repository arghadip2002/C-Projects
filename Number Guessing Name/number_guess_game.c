#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = rand() % 100 + 1, gnum, i = 1;
    printf("Guess a number between 1 to 100\n");
    printf("Guess the num : ");
    scanf("%d", &gnum);
    while (num != gnum)
    {

        if (num > gnum && gnum < 100 && gnum > 0)
        {
            printf("Enter larger number :");
            scanf("%d", &gnum);
        }
        else if (num < gnum && gnum <= 100 && gnum > 0)
        {
            printf("Enter smaller number :");
            scanf("%d", &gnum);
        }
        else if (gnum > 100 || gnum < 1)
        {
            printf("Invalid Input !!\n");
            printf("Type a valid number : ");
            scanf("%d", &gnum);
        }
        i++;
    }
    printf("CONGRATULATIONS !! You have a right Guess.\n");
    printf("You have guessed it in %dth terms", i);
    return 0;
}