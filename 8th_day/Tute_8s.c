#include <stdio.h>
#include <string.h>

void func(char *string)
{
    int in = 0;
    int ptr = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')//removing after bracket value
        {
            in = 0;
            continue;
        }
        else if (string[i] == '>')//after bracket continue 
        {
            in = 1;
            continue;
        }
        if (in == 1)//shifting towards left
        {
            string[ptr] = string[i];
            ptr++;
        }
    }
    string[ptr] = '\0';//adding null value at last ptr to tell compiler string ends here

    while (string[0] == ' ')//removing starting spaces
    {

        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')//removing back spaces
    {
        string[strlen(string) - 1] = '\0';
        
    }
}

int main()
{
    char str[] = "<h3>     Hello dude 123  </h3>";
    func(str);
    printf("The parsed line of html is --%s--", str);
    return 0;
}