#include <stdio.h>
#include <string.h>

int is_palindrome(int a)
{

    int rev = 0, r;
    while (a != 0)
    {
        r = a % 10;
        rev = rev * 10 + r;
        a = a / 10;
    }

    if (a == rev)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    int arr;
    printf("Enter a number which you want check is it palindrome or not.\n");
    scanf("%d", &arr);
    if (is_palindrome(arr))
    {
        printf("The number %d is Palindrome\n", arr);
    }
    else
    {
        printf("The number %d is not Palindrome\n", arr);
    }

    return 0;
}