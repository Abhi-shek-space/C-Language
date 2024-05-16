#include <stdio.h>

void array2(int arr[])
{
    int temp;
    for (int i = 0; i < 9 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[8 - i];
        arr[8 - i] = temp;
    }
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        printf("Element at index %d is %d.\n", i, arr[i]);
    }
}

int main()
{

    int arr[9] = {1, 2, 3, 4, 5, 25, 34, 45, 87};
    printf("Before reverse\n");
    arrayprint(arr);

    array2(arr);
    printf("After reverse\n");
    arrayprint(arr);

    return 0;
}