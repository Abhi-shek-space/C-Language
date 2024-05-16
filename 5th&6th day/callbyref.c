#include <stdio.h>
// call by reference can change value of main function
// call by value can't change value of main function
int func1(int *a)
{
    *a = 34;
    
}
int main()
{
    int a = 3;
    printf("The value before call by reference %d\n", a);
    func1(&a);
    printf("The value after call by reference %d\n", a);
    return 0;
}