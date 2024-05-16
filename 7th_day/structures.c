/*structure can collect different data type similar as array collects same data type only */
/*(.)structure member operator use to access members of the structures[Structure_name.member_name]*/
 #include  <stdio.h>
 #include  <string.h>
 
 struct student
 {
    int id;
    int marks;
    char fav_char;
    char name[56];
 } ;
 
 int main()
 {
    struct student abhi, harry, sonu;//both line are correct but in below on we use typedef to rename to st(struct student),
   //  st abhi, harry, sonu;
    harry.id=1;
    abhi.id=2;
    sonu.id=3;
    harry.marks=344;
    abhi.marks=985;
    sonu.marks=767;
    harry.fav_char='t';
    abhi.fav_char='e';
    sonu.fav_char='d';

    strcpy(harry.name,"Hello my name is harry");//using strcpy to copy in harry.name
    printf("Swonu id is %d \n",sonu.id);
    printf("Sonu got %d marks\n",sonu.marks);
    printf("Sonu favorite character is %c \n",sonu.fav_char);

    printf("%s \n",harry.name);
    printf("harry id is %d \n",harry.id);
    printf("harry got %d marks\n",harry.marks);
    printf("harry favorite character is %c \n",harry.fav_char);

    printf("abhi id is %d \n",abhi.id);
    printf("abhi got %d marks\n",abhi.marks);
    printf("abhi favorite character is %c \n",abhi.fav_char);

    return 0;
 }