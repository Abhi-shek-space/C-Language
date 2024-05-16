#include <stdio.h>

void enterMatrix(int m[][10], int dim[])
{
    for (int i = 0; i < dim[0]; i++)
    {
        for (int j = 0; j < dim[1]; j++)
        {
            printf("enter value at row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void printMatrix(int m[][10], int dim[])
{
    for (int i = 0; i < dim[0]; i++)
    {
        for (int j = 0; j < dim[1]; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int m1[][10], int m2[][10], int dim1[], int dim2[])
{
    int m3[10][10];
    for (int i = 0; i < dim1[0]; i++)
    {
        for (int j = 0; j < dim2[1]; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < dim1[1]; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    int dim3[] = {dim1[0], dim2[1]};
    printMatrix(m3, dim3);
}

int main()
{
    int dims[2][2];
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("enter dimension %d of matrix %d: ", j, i);
            scanf("%d", &dims[i - 1][j - 1]);
        }
    }
    if (dims[0][1] == dims[1][0])
    {
        int matrix1[10][10];
        int matrix2[10][10];
        printf("\nTaking input for first matrix\n");
        enterMatrix(matrix1, dims[0]);
        printf("\nTaking input for second matrix\n");
        enterMatrix(matrix2, dims[1]);
        printf("\n");
        multiplyMatrix(matrix1, matrix2, dims[0], dims[1]);
    }
    else
    {
        printf("Matrix multiplication is not possible with matrices of these dimensions");
    }
    return 0;
}