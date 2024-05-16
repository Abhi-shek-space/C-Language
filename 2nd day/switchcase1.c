#include <stdio.h>

int main()
{
    int a,m;
    printf("Enter your age\n");
    scanf("%d",&a);
    if (a==18)
    {
        printf("Enter the month you born \n");
        scanf("%d",&m);
    }
    

    switch (a)
    {
    case 18:
        printf("you are 18 years ");
        
        switch (m)
        {       
        case 1:
            printf("and 1 month old ");
            break;
        case 2:
            printf("and 2 months old ");
            break;
        case 3:
            printf("and 3 months old ");
            break;
        case 4:
            printf("and 4 months old ");
            break;
        case 5:
            printf("and 5 months old ");
            break;
        case 6:
            printf("and 6 months old ");
            break;
        case 7:
            printf("and 7 months old ");
            break;
        case 8:
            printf("and 8 months old ");
            break;
        case 9:
            printf("and 9 months old ");
            break;
        case 10:
            printf("and 10 months old ");
            break;
        case 11:
            printf("and 11 months old ");
            break;
        case 12:
            printf("and 12 month old ");
            break;
        
        default:
            printf("\nchoose a right month");
            break;
        }
        break;
    
    default:
        printf("you are not 10 years old");
        break;
    }
    return 0;
}
