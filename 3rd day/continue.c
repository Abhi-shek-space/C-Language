#include  <stdio.h> 

int main()
{
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d.Enter your age\n",i);
        scanf("%d",&age);


        if (age==8)
        {
            continue;//direct move to the next value of i and below this no code will be executed
        }
        printf("continue statement not runs this time ");
    }
     
    return 0;
}
