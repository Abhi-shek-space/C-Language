/*do while loop runs at least once*/
#include <stdio.h>

int main()
{
    int num, i = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", i);
        i += 1;
    } while (i < num);

    return 0;
}
