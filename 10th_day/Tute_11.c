#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random_number(int n)
{
    int a;
    srand(time(NULL));
    a = rand() % n;
    switch (a)
    {
    case 0:
        return 4;
        break;
    case 1:
        return 5;
        break;

    default:
        return 6;
        break;
    }
}

int main()
{
    char name[30];
    int a, b, c;
    printf("This is rock,paper and scissor game.\n");
    printf("Enter your name.\n");
    scanf("%s", &name);
    

label:

    printf("Select from 3 options as(1,2 and 3) :\n1.rock.\n2.paper\n3.scissor\n");
    scanf("%d", &a);
    // taking input from user
    static int j, m;
    switch (a)
    {
    case 1:
        printf("%s's pick is Rock\n", name);
        break;
    case 2:
        printf("%s's pick is Paper\n", name);
        break;
    case 3:
        printf("%s's pick is Scissor\n", name);
        break;

    default:

        printf("Select a valid option.\n");
        printf("Press 0 to play again\n");
        scanf("%d", &c);
        if (c == 0)
        {
            goto label;
        }

        goto end;
    }
    // Taking random number from function ,according to the number we assign rock ,paper and scissor to them using switch case
    b = get_random_number(2);
    switch (b)
    {
    case 4:
        printf("Computer picks Rock\n");
        if (a == 1)
        {
            printf("Draw\n");
        }
        else if (a == 2)
        {
            printf("%s win\n", name);
            j++;
        }

        else if (a == 3)
        {
            printf("%s loose\n", name);
            m++;
        }

        break;
    case 5:
        printf("Computer picks Paper\n");
        if (a == 1)
        {
            printf("%s loose\n", name);
            m++;
        }
        else if (a == 2)
        {
            printf("Draw\n");
        }

        else if (a == 3)
        {
            printf("%s win\n");
            j++;
        }

        break;
    case 6:
        printf("Computer picks Scissor\n");
        if (a == 1)
        {
            printf("%s Win\n");
            j++;
        }
        else if (a == 2)
        {
            printf("%s loose\n");
            m++;
        }

        else if (a == 3)
        {
            printf("Draw\n");
        }

        break;

    default:
        break;
    }
    printf("Press 1 to play again and press anything except 0 to exit and reults\n");
    scanf("%d", &c);
    if (c == 1)
    {
        goto label;
    }

    if (j > m)
    {
        printf("%s's score is %d.\n", name, j);
        printf("Computer score is  %d.\n", m);
        printf("%s Wins\n");
    }
    else if (j < m)
    {
        printf("%s's score is %d.\n", name, j);
        printf("Computer score is %d.\n", m);
        printf("Computer Wins\n");
    }

end:

    return 0;
}