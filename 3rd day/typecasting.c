/*typecasting is used to change data type*/

#include  <stdio.h> 

int main()
{
    int a=3;
    //float b=54/5; int value returns int 10
    float b=(float)54/5;//adding float it will return 10.8
    printf("the value of b is %d\n",(int)b);//adding (int) we change value type to int without int it gives(10.8) by adding int gives(10) also change %f to %d same as data type
    return 0;
}
