// collection of data items os same data type

#include <stdio.h>

int main()
{
    int matrix[2][2] = {{23, 45}, {34, 56}};//2d array(matrix)


    int marks[6] = {23,45,23,67,89,67};//pre initialize values


    // for (int i = 0; i < 6; i++)//taking values from user
    // {
    //     printf("Enter your %d subject marks \n",i);
    //     scanf("%d",&marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("The marks of your %d,%d subject is %d \n", i, j, marks[i]);//showing postion where values saved with values


            printf("%d ",matrix[i][j]);// display in form of matrix
        }
        printf("\n");
    }


    marks[0]=34;
    printf("Marks of student  1 is %d\n",marks[0]);//accessing value by its address

    printf("Marks of student  2 is %d\n",marks[0]);

    return 0;
}
