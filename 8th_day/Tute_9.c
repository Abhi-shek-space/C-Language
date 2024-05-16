#include <stdio.h>
#include <string.h>

struct drivers
{
    char name[50];
    int DLno;
    char route[20];
    float kms;

} s1, s2, s3;
int main()
{
    
    struct drivers;
    
    printf("Enter your First drivers name\n");
    printf("Enter your drivers name\n");
    scanf("%s", &s1.name);
    printf("Enter your driving license number\n");
    scanf("%d", &s1.DLno);
    printf("Enter the route\n");
    scanf("%s", &s1.route);
    printf("Enter KMs\n");
    scanf("%f", &s1.kms);

    printf("Enter your second drivers name\n");
    printf("Enter your name\n");
    scanf("%s", &s2.name);
    printf("Enter your driving license number\n");
    scanf("%d", &s2.DLno);
    printf("Enter the route\n");
    scanf("%s", &s2.route);
    printf("Enter KMs\n");
    scanf("%f", &s2.kms);
    
    printf("Enter your Third drivers name\n");
    printf("Enter your name\n");
    scanf("%s", &s3.name);
    printf("Enter your driving license number\n");
    scanf("%d", &s3.DLno);
    printf("Enter the route\n");
    scanf("%s", &s3.route);
    printf("Enter KMs\n");
    scanf("%f", &s3.kms);

    printf("Driver name is %s .\nDriving license no.: %d.\nRoute: %s.\nKM travel %f.\n", s1.name, s1.DLno, s1.route, s1.kms);
    printf("Driver name is %s .\nDriving license no.: %d.\nRoute: %s.\nKM travel %f.\n", s2.name, s2.DLno, s2.route, s2.kms);
    printf("Driver name is %s .\nDriving license no.: %d.\nRoute: %s.\nKM travel %f.\n", s3.name, s3.DLno, s3.route, s3.kms);

    return 0;
}