/*swich must be int or char
case value also be an int or char
*/
#include <stdio.h>

int main()
{
    int age,marks;
    printf("Enter your age \n");
    scanf("%d",&age);
    printf("Enter your marks \n");
    scanf("%d",&marks);

   switch (age)
   {
   case 3:
    printf("The age is 3\n");//it will break if condition is true
    switch (marks)//nested switch
    {
    case 90:
        printf("your marks are 90");
        break;
        
    
    default:
    printf("your marks are not 90");
        break;
    }
    break;
   
   case 13:
    printf("The age is 13\n");
    break;
   
   case 23:
    printf("The age is 23\n");
    break;
   
   default:
   printf("Age is not 3,13 or 23\n");
    break;
   }
   return 0;
}