//There is no datatype such as string in c.
//but we make array of characters to create string and at the end using"\0"(nulls zero(character)) to tell compiler that string ends here.
#include  <stdio.h>

void pstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}

int main()
{
    // char str[]={'a','b','h','i','s','\0'};
    // char str[]="abhi";
    char str[10];
    gets(str);//always use gets and puts while using string (get work as scanf,puts work as printf).
    printf("%s\n",str);
    puts(str);
    pstr(str);
    return 0;
}
 