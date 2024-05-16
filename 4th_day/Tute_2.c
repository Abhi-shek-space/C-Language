/*

km to miles
inches to foot
cm to inches
pound to kgs
inches to meter

*/

#include <stdio.h>

int kTm() // km_to_miles
{
    float k;
    printf("Enter value in km \n");
    scanf("%f", &k);
    printf("%f km is %f in miles\n", k, k * 0.621371);
    return 0;

}

int iTf() // inches_to_foot
{
    float i;
    printf("Enter value in inches \n");
    scanf("%f", &i);
    printf("%f inches is %f in feet\n", i, i / 12);
    return 0;
}

int cTi() // cm_to_inches
{
    float c;
    printf("Enter value in cm \n");
    scanf("%f", &c);
    printf("%f cm is %f in inches\n", c, c / 2.54);
    return 0;
}

int pTk() // pound_to_kg
{
    float p;
    printf("Enter value in pound \n");
    scanf("%f", &p);
    printf("%f pound is %f in kgs\n", p, p * 0.45359237);
    return 0;
}

int iTm() // inches_to_meter
{
    float in;
    printf("Enter value in inches \n");
    scanf("%f", &in);
    printf("%f inches is %f in meter\n", in, in * 0.0254);
    return 0;
}


int main()
{
    int a,i;
    printf("Select option from 1 to 5\nEnter 1 to convert Km to Miles\nEnter 1 to convert Inches to feet\nEnter 1 to convert Cm to Inches\nEnter 1 to convert Pound to Kg\nEnter 1 to convert Inches to Meter\n");
    scanf("%d", &a);
    if (a == 1)
    {
        
        kTm();
        printf("For more conversions press 0\n");
        scanf("%d",&i);
        if (i==0)
        {
            return main();
        }
        else{
            return 0;
        }
        
    }
    else if (a == 2)
    {
        iTf();
        printf("For more conversions press 0\n");
        scanf("%d",&i);
        if (i==0)
        {
            return main();
        }
        else{
            return 0;
        }
    }
    else if (a == 3)
    {
        cTi();
        printf("For more conversions press 0\n");
        scanf("%d",&i);
        if (i==0)
        {
            return main();
        }
        else{
            return 0;
        }
    }
    else if (a == 4)
    {
        pTk();
        printf("For more conversions press 0\n");
        scanf("%d",&i);
        if (i==0)
        {
            return main();
        }
        else{
            return 0;
        }
    }
    else if (a == 5)
    {
        iTm();
        printf("For more conversions press 0\n");
        scanf("%d",&i);
        if (i==0)
        {
            return main();
        }
        else{
            return 0;
        }
    }
    else
    {
        printf("Select valid option\n");
        return main();
    }

    return 0;
}
