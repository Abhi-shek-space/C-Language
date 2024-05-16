#include <stdio.h> 

int main()
{
    int i,j;
    for (i=0,j=0 ; j=1,i<5 ; i++,j++)//for(expression 1;expression 2;expression 3)//expression 1 is optional(i=0) we can initialize at (int i=0) as well
    //expression 2 conditional expression to check condition other wise it will go to infinite loop
    {
        printf("%d  %d\n",i,j);
        //expression 3 is optional we can initialize inside the loop also
    }
    return 0;
}
