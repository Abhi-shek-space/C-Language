/*Function are used to divide large c program into smaller parts or pieces*/
/*Function can be called multiple times if needed*/
#include <stdio.h> 

int sum(int a,int b)//with argument and return value
{
    return (a+b);
}

void printstar(int n)//with argument and without return value
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n",'*'); 
    }
}

int takenum()//without argument and with return value
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}   

void name()//without argument and return value
{
    int i;
    printf("Enter your number\n");
    scanf("%d",&i);
    printf("your number is %d \n",i);
    
    
}

int main()
{
    int a;
    a=sum(23,34);
    printf("%d\n",a);

    printstar(3);

    takenum();

    name();
   
    return 0;
}
