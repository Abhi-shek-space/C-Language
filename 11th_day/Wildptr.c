/*Uninitialized ptr(Wild ptr)
causes crashes of program*/
#include  <stdio.h>

int main()
{
    int a=6;
    int *ptr;//At this point its a Wild ptr
    // *ptr=456;
    ptr=&a;//Now its not a Wild ptr because ptr is assigned to address of a 
    printf("The value of a %d\n", *ptr);
    return 0;
}
