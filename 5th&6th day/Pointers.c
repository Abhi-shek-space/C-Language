// Pointer stores address of another variable
//efficient memory management by use of pointers 
//%x hexadecimal
//%p to print pointer
#include <stdio.h>

int main()
{
    int a=86;
    
    int *ptr2;//does not point to any object or function
    //use to remove address of that pointer
    int *ptr = &a;
    printf("The address of ptr %x\n", &ptr);
    printf("The address of a %p\n",&a);
    printf("The address of a %x\n",ptr);
    printf("The value of a %d\n",*ptr);
    printf("The address of ptr2 %p \n",ptr2); 

    return 0;
}
