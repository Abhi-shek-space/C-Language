#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "bro";
    char s3[45];
    strcpy(s3,strcat(s1,s2));//copy to s3 
    puts(s3);//print s3
    printf("the length of s1 is %d\n",strlen(s1));//len
    printf("the length of s2 is %d\n",strlen(s2));
    printf("the reverse of s1 is %s\n",strrev(s1));//reverse
    
    puts(strcat(s1,s2));//merge
    return 0;
}