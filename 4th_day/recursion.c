/*Recursive function call a copy of itself to work on a smaller function*/
/*any function which calls itself is also called RF*/
#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    int num;
    printf("Enter a number that you want factorial of \n");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}
