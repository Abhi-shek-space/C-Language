#include  <stdio.h>
int main()
{
    int a=3;
    int *ptra=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d",ptra+1);
    return 0;
}