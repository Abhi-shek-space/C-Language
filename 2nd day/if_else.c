#include<stdio.h>

 
int main()
{
    int age;
    printf("Enter your age \n");
    
    scanf("%d",&age);
    printf("You have entered %d as your age. \n",age);
    if (age>=18)
    {
        printf("you can vote now");
    }

    else if (age>10)
    {
        printf("you need %d more years for vote",18-age);
    }
    else
    {
        printf("you cannot vote");
    }
    
    
    
    return 0;

}   