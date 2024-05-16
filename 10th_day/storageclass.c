/*4 Storage classes
1.-Auto storage class{auto int i= int i}
2.-External storage class global or external variable(use forcefully inside fuction by adding extern int i)
3.-Static storage class{static variable freeze the assign value}
4.-register Storage class (CPU storage is used for fast processing){register int i }*/

#include <stdio.h>

// int sum=0;//external variable(global variable)
int add(int a, int b)
{
    // extern int sum;//use global variable by using extern
    int sum;
    return sum;
}
int sum = 323;

int main()
{
    int sum = add(45, 34);
    printf("The sum is :%d\n", sum);
    return 0;
}