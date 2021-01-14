#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num;

    srand(time(0));
    int a = rand();

    int c = (a % 100) + 1;

    int round = 0;
    printf("You have only 10 atemps");
    while (round < 10)
    {

        printf("Enter your number\n");
        scanf("%d", num);

        if (num == c)
        {
            printf("You win the match in%d", num, "round");
        }
        else if (num > c)
        {
            printf("You umer is too high");
        }
        else
        {
            printf("your numberis too big");
        }

        round++;
    }

    return 0;
}