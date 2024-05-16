#include  <stdio.h>
#include  <string.h>
    
int main()
{
    printf("The file name is %s.\n", __FILE__);//shows file name
    printf("Today's date is is %s.\n", __DATE__);//shows Date
    printf("Current time is is %s.\n", __TIME__);//shows Time
    printf("Line number is %d.\n", __LINE__);//shows Line no.
    printf("ANSI :%d.\n", __STDC__);//shows COMPILER WORKING AS ANSI STANDARDS
    return 0;
}