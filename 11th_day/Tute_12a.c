#include <stdio.h>

void print_matrix(int mat[10][10], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}

void enter_matrix(int mat[10][10], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value at position %d,%d\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Your entered these values as %d x %d matrix.\n", a, b);
    print_matrix(mat, a, b);
}

void multiply(int mat1[][10], int mat2[][10], int a, int d)
{
    int mat3[10][10];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < a; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Multiplication of given matrices is %d x %d this\n", a, d);
    print_matrix(mat3, a, d);
}

int main()
{
    int a, b, c, d;
    printf("This is matrix multiplication \n(the matrix multiplication is only possible if {first's matrix columns = second's matrix rows} have that in mind )\n");
    printf("Enter the first matrix dimensions as rows and columns.\n");
    printf("Rows: \n"); // Taking dimensions of the matrix
    scanf("%d", &a);
    printf("Columns: \n");
    scanf("%d", &b);

    printf("Enter the Second matrix dimensions as rows and columns.\n");
    printf("Rows: \n"); // Taking dimensions of the matrix
    scanf("%d", &c);
    printf("Columns: \n");
    scanf("%d", &d);
    if (b == c)
    {
        int matrix_A[10][10];
        enter_matrix(matrix_A, a, b);
        int matrix_B[10][10];
        enter_matrix(matrix_B, c, d);
        multiply(matrix_A, matrix_B, a, d);
    }
    else
    {
        printf("Enter valid dimension as {first's matrix columns = second's matrix rows}\n");
        return 0;
    }

    return 0;
}