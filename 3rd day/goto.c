/*goto is also called jump statment,
used in to break multiple loop  in a single stement*/

#include  <stdio.h> 

int main()
{
    /*label:
       printf("we are inside label\n");
       goto end;
    printf("hello we are outside\n");
    goto label;*/
    int num;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%d.%d-Enter a number \nEnter 0 to end\n",i,j);
            scanf("%d",&num);
            if (num==0)
            {
                goto end;//it break according to the end: is placed using doto end;
                //break;it break from only j loop
            }
        }       
    }   
    end:
        printf("End");
    return 0;
}
