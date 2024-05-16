/*typedef used for change name
like typedef int integer;*/
#include <stdio.h>

typedef struct student // struct student whole is previous name and new is st
{
    int id;
    int marks;
    char fav_char;
    char name[56];
} st;

int main()
{

    // int *a, b;

    typedef int* intp;
    intp a,b;
    int c=56;
    a=&c;
    b=&c;//shows error due to int (*a,b) is a pointer and b assign as int 

    struct student s1, s2;
    s1.id = 56;
    s2.id = 26;
    printf("S1 id is %d\n", s1.id);
    printf("S1 id is %d\n", s1.id);

    typedef int inter;
    inter b=45;
    printf("%d\n",b);
    int a=45;
    printf("%d",a);

    return 0;
}