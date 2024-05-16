//by recursive method fibonacci series
#include <stdio.h>

int fibI(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n; i++)
    {
        b=a+b;
        a=b-a;

    }
    return a;
}

int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return (fib(n-1) + fib(n-2));
        
    }
}
int main()
{
    int a;
    printf("Enter the number upto which you need to show fibonacci series\n");
    scanf("%d",&a);
    
    printf("Fibonacci series using iterative of %d is %d\n",a,fibI(a));

    printf("The fibonacci series for %d is ",a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d,",fib(i));

    }
    return 0;
    

}