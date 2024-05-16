#include  <stdio.h>

int largest_no(int arr[],int a)
{
    int p=0,max=0;
    for (int i = 0; i < a; i++)
    {
        if (arr[p]>arr[i])
        {
            continue;
        }
        else{
            arr[p]=arr[i];
        }
        
    }
    max=arr[p];
    return max;

}

int main()
{
    int arr[]={23,4,5,2,1,3,4343,5,53,12,234};
    int a= largest_no(arr,11);
    printf("The maximum number in array is %d.\n",a);
    return 0;
}