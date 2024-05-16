#include <stdio.h>
#include <string.h>

int main()
{
    char a[30];
    char a3[] = " is a friend of ";
    char a1[15];
    printf("Enter your name :\n");
    gets(a1);
    char a2[15];
    printf("Enter your friends name :\n");
    gets(a2);
    // puts(a1);
    // puts(a2);
    // puts(strcat(a1,a2));
    strcpy(a,(strcat(a1,a3)));
    puts(a);
    puts(strcat(a,a2));
    
    return 0;
}