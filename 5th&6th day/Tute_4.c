#include <stdio.h>

int Tstarpattern(int n)
{
    for (int i = 0; i < n+1 ; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",'*');
        }
        printf("\n");    
    }    
    return n;
}

int RTstarpattern(int n)
{
    for (int i = n; i >0 ; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%c",'*');
        }
        printf("\n");
        
    }
    
    return n;
}

int main()
{
    int a,n;
    printf("Choose 1 to print Traingular star patter.\nChoose 2 to print reversed star pattern.\n");
    scanf("%d",&a);
    printf("Number of pattern lines you want.\n");
    scanf("%d",&n);
    if (a==1)
    {
        printf("Here is your triangular star pattern\n ",Tstarpattern(n));
    }
    else if (a==2)
    {
        printf("Here is your reversed triangular star pattern\n",RTstarpattern(n));
    }
    else
    {
        printf("Choose correct option\n");
        return main();
    }
    return 0;
}