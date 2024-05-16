#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr;
    // char n[];
    int a;
    printf("Enter the no. of character in your id\n");
    scanf("%d", &a);
    ptr = (char *)malloc(a * sizeof(char));
    for (int i = 0; i < a; i++)
    {
        printf("Enter character then press enter to wright next character\n");
        scanf("%s", &ptr[i]);
    }
    printf("Employee no 1 :\nThe employee id you entered is :\n");
    for (int i = 0; i <= a; i++)
    {
        puts(&ptr[i]);
        ptr[i + 1] = '\0';
        break;
    }

    printf("Enter the no. of character in your id\n");
    scanf("%d", &a);
    ptr = (char *)realloc(ptr, a * sizeof(char));
    for (int i = 0; i < a; i++)
    {
        printf("Enter character then press enter to wright next character\n");
        scanf("%s", &ptr[i]);
    }
    printf("Employee no 2 :\nThe employee id you entered is :\n");
    for (int i = 0; i <= a; i++)
    {
        puts(&ptr[i]);
        ptr[i + 1] = '\0';
        break;
    }

    printf("Enter the no. of character in your id\n");
    scanf("%d", &a);
    ptr = (char *)realloc(ptr, a * sizeof(char));
    for (int i = 0; i < a; i++)
    {
        printf("Enter character then press enter to wright next character\n");
        scanf("%s", &ptr[i]);
    }
    printf("Employee no3 :\nThe employee id you entered is :\n");
    for (int i = 0; i <= a; i++)
    {
        puts(&ptr[i]);
        ptr[i + 1] = '\0';
        break;
    }
    free(ptr);

    return 0;
}