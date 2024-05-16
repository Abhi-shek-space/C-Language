#include  <stdio.h>

int add_sub(int *q,int *w)
{
   *q=*q+*w;
   *w=*q-*w;
}

int main()
{
    int a=12,b=6;
    printf("The value of a is %d and b is %d\n",a,b);
    add_sub(&a,&b);
    printf("The value of (a & b) after call by reference addition is %d and subtraction is %d\n",a,b);
    

    return 0;
}