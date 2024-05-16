#include  <stdio.h>
#include  <string.h>
    
int main()
{
    char l[500]="Thanks ";
    printf("Enter your name.\n");
    char name[50];
    scanf("%s",&name);
    strcat(l,name);
    strcat(l," for purchasing ");
    printf("Enter the item you purchased.\n");
    char item[50];
    scanf("%s",&item);
    strcat(l,item);
    strcat(l," From our outlet ");
    char outlet[30]="ram laxmi enterprises";
    strcat(l,outlet);
    strcat(l,"\nPlease visit our outlet ");
    strcat(l,outlet);
    strcat(l," for any kind of problems.");
    strcat(l,"\nWe plan you to serve you again soon.");

    FILE *p=NULL;
    p=fopen("letter1.txt","w");
    fprintf(p,"%s",l);
    

    return 0;
}