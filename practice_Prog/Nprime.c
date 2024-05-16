#include  <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number that you want to know weather its prime or not.\n");
    scanf("%d",&a);
    for (int i = 1; i < a; i++)
    {
        b=a%i;
        if (b==0)
        {
            printf("%d is a prime number",a);
        }
        
    }

    
    return 0;
}