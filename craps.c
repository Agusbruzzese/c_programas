/*Craps*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll_dice(void);

int main()
{
    int game_status, sum, my_point;

    srand(time(NULL));
    sum = roll_dice();
    switch(sum)
    {
        case 7: case 11:
            game_status = 1;
            break;
        case 2: case 3: case 12:
            game_status = 2;
            break;
        default :
            game_status = 0;
            my_point = sum;
            printf("point is %d\n", my_point);
            break;
    }
    while (game_status == 0)
    {
        sum = roll_dice();

        if (sum == my_point)
        {
            game_status = 1;
        }
        else
        {
            if (sum == 7)
                game_status = 2;
        }
        if (game_status == 1)
            printf("Player wins\n");
        else
            printf("Player loses\n");
        return 0;
    }
}
int roll_dice(void)
{
    int die1, die2, work_sum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    work_sum = 1 + die1 + die2;
    printf("player rolled %d + %d = %d\n", die1, die2, work_sum);
    return work_sum;
}
