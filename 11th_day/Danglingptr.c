/*Dangling ptr-those ptr which takes address of a variable then after that the variable no longer exist or deleted somehow,Dangling ptr will be created in 3 cases
1.Memory deallocation in dynamic memory ptr takes space from heap using malloc or calloc the next command will be free(ptr)
ptr becomes dangling.
2.ptr takes address from a function(func) then after that the function return the value to the main the local variable is deleted for main function because its local variable of (func) ptr becomes dangling.
3.Ptr points and address inside a scope ({int i}) then after scope ends the variable also ends ,ptr becomes dangling.
use NULL to that ptr to avoid causes of dangling ptr(ptr points unwanted address) */
#include <stdio.h>
// #include  <string.h>
#include <stdlib.h>

int *funcdangling()
{
    int a, b, s;
    a = 34;
    b = 24;
    s = a + b;
    return &s;
}

int main()
{
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 14;
    ptr[2] = 24;
    ptr[3] = 44;
    ptr[4] = 54;
    free(ptr); // case 1 Deallocation of a memory block

    int *dangptr = funcdangling(); // case 2 function returning local variable
    int *dangptr3;
    {//scope starts
        int a = 23;
        dangptr3 = &a;//case 3 where variable ends with scope
    }//scope ends
    return 0;
}