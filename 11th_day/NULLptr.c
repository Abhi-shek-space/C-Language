#include <stdio.h>

int main()
{
    int a = 23;
    int *ptr = NULL;//use to null the pointer before use to don't save any garbage value or not point to anything.
    // ptr=&a;
    if (ptr != NULL)
    {
        printf("The value of x %d\n", ptr);
    }
    else
    {
        printf("The ptr is NULL \n");
    }

    return 0;
}
