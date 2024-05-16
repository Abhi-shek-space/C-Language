/* 1.MALLOC-memory allocation(initialize memory with garbage value)
2.CALLOC-contiguous allocation(initialize value with 0)
3.REALLOC-reallocation
4.FREE-free the allocated memory
*/
#include <stdio.h>
#include <stdlib.h> //library for malloc calloc realloc and free

int main()
{
    // malloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create.\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The value at no %d is %d\n", i, ptr[i]);
    }

    //calloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create.\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
        
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("The value at no %d is %d\n", i, ptr[i]);
        
    }
    
    //realloc
    
    printf("Enter the new size of array you want to create.\n");
    scanf("%d",&n);

    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The value at no %d is %d\n", i, ptr[i]);
        
    }
    free(ptr);

    return 0;
}