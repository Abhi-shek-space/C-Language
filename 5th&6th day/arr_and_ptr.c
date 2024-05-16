/* * used for dereference which shows us value *(arr)
// &  or arr used to shows address*/

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 4, 5, 2, 4};
    int *parr=&arr[1];
    printf("The value at position 3 is %d\n", arr[3]);
    printf("The address of 1st element of array is %d\n", &arr[0]); // all four of them is for address
    printf("The address of 1st element of array is %d\n", arr);     // same as &arr[0]
    printf("The address of 2st element of array is %d\n", &arr[1]);
    printf("The address of 2st element of array is %d\n", arr + 1); // same as &arr[1]

    printf("The value at address 1st element of array is %d\n", *(&arr[0])); // all four of them is for value
    printf("The value at address 1st element of array is %d\n", *(arr));
    printf("The value at address 2st element of array is %d\n", *(&arr[1]));
    printf("The value at address 2st element of array is %d\n", *(arr + 1));
    //arr++;//shows error because it is constant 
    parr;//this can we do 
    printf("%d\n",parr);
    printf("The value at address %d of array is %d\n", &arr[0], *(&arr[0])); // here all four are address +value
    printf("The value at address %d of array is %d\n", arr, *(arr));
    printf("The value at address %d of array is %d\n", &arr[1], *(&arr[1]));
    printf("The value at address %d of array is %d\n", arr + 1, *(arr + 1));

    return 0;
}