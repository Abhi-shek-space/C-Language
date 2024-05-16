#include <stdio.h>
int b = 12; // global variable

int fun1(int b)
{
    static int a = 0;//not take any function value like(static int a=fun())shows error because static needs a direct value to save in memory same as global variable
    printf("The value of static a is %d\n", a);
    a++;
    return 0;
}

void func()
{
    printf("Global variable b address is%d\n", b); // prints address of global if there is no same name local variable inside this function.//(local variable > global variable) in case of priority.
}

int fun(int b) // local variable
{
    printf("The address of b inside fun() is %d\n", &b); // prints address of local variable.
    printf("value of b %d\n", b);
    return b + 10;
}

int main()
{
    int b = 23;
    printf("The address of b inside main() is %d\n", &b); // local variable address
    printf("Value of b %d\n", fun(b));

    fun1(b);
    fun1(b);
    fun1(b);
    fun1(b);
    return 0;
}