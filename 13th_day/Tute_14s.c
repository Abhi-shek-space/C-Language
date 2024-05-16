#include <stdio.h>

#include <string.h>

int main()
{
    char letter[1000] = "Thanks ";
    char name[34] = "Harry";
    strcat(letter, name);
    strcat(letter, " for purchasing ");
    char item[34] = "Table Fan";

    strcat(letter, item);
    strcat(letter, " from our outlet ");
    char outlet[100] = "Ram Laxmi fan outlet";
    strcat(letter, outlet);
    strcat(letter, "\nPlease Visit our outlet ");
    strcat(letter, outlet);
    strcat(letter, " for any kind of problems.\nWe plan to server you again soon.");

    FILE *ptr = NULL;
    ptr = fopen("letter.txt", "w");
    fprintf(ptr, "%s", letter);
    fclose(ptr);
    
    return 0;
}