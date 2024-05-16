#include <stdio.h>
#include <string.h>

int main()
{
    int a = 231;
    float b = 6.7;
    void *ptr;//general purpose pointer
    ptr = &a;
    printf("The value of a is %d\n", *(int *)ptr); // by adding (int*) typecast to int also used in DynamicM.c
    ptr = &b;
    printf("The value of a is %f\n", *(float *)ptr); // by adding (int*) typecast to int also used in DynamicM.c
    return 0;
}