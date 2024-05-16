#include  <stdio.h>

int func1(int array1[])
{
    for (int i = 0; i <5 ; i++)
    {
        printf("%d\n",array1[i]);
    }
    // array[0]=435;//if we change value here so it will also reflect in main function
    return 0;
}


void func2(int *array2)//using *
{
    for (int i = 0; i <5 ; i++)
    {
        printf("%d\n",*(array2+i));
    }  
}


void func3(int array3[2][2])//2d array
{
    for (int i = 0; i <2 ; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("At index %d.%d the value is %d \n",i,j,array3[i][j]);
        }
    } 
}


int main()
{
    int arr2[][2]={{3,4},{45,12}};
    int arr[]={13,25,35,45,5};
    printf("The value at index 0 is %d\n",arr[0]);
    func1(arr);
    // printf("The value at index 0 is %d",arr[0]);
    func2(arr);
    func3(arr2);
    return 0;
}