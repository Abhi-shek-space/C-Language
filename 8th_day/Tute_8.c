#include  <stdio.h>
#include  <string.h>

void parser(char arr[])
{
    for (int i = 5; i < strlen(arr)-5; i++)
    {
        printf("%c",arr[i]);
    }
}


int main()
{
    char str[30];
    gets(str);
    // strcpy(str,"<h1> Header </h1>");
    printf("Before parser :\n");
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    printf("After parser :\n");
    parser(str);

    
    return 0;

}