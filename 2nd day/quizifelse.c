#include<stdio.h>

int main()
{
    int a;
    printf("Which subjects do you pass this time select from options given below \n1.MATH \n2.SCIENCE \n3.BOTH \n",a);
    scanf("%d",&a);
    if (a==1)
    {
        printf("you won 15rs prize money");
    }
    
    else if (a==2)
    {
        printf("you won 15rs prize money");
    }
    else 
    {
        printf("you won 45rs prize money");
    }
    
    return 0;
}
