/*union is similar to structure but union uses memory in an efficient way but it reduces the use of members
in structure we use all members at once but in union we can't use all members at once*/
#include  <stdio.h>
#include  <string.h>

union student
 {
    int id;
    int marks;
    char fav_char;
    char name[56];
 } un;
 
int main()
{
    union student s1;
    s1.id=4;
    s1.marks=876;
    s1.fav_char='t';
    strcpy(s1.name,"Abhi");//only one value is going to be right other will get trash values//last line will execute perfectly above this shows trash value.

    printf("Id %d\n",s1.id);
    printf("marks %d\n",s1.marks);
    printf("fav_char %c\n",s1.fav_char);
    printf("name %s\n",s1.name);
    return 0;
}