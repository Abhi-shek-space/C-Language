#include  <stdio.h>

int main()
{
    int a,b=0;
    printf("Enter the last natural number you want the sum of\n");
    scanf("%d",&a);
    b=(a*(a+1))/2;
    // for (int i = 1; i <= a; i++)
    // {
    //     b=
    // }
    printf("The sum of %d Naturals numbers is %d.\n",a,b);
    return 0;
}