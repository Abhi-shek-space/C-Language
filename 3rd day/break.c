#include  <stdio.h> 

int main()
{
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter you age \n");
        scanf("%d",&age);
        if (age>10)
        {
            break;//breaks out of loot and move to next part after loop
        }
        
    }
    
    return 0;
}
