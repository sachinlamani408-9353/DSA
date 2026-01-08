#include <stdio.h>
// structure which contains the student details
 struct student{
 int roll;
 float marks;
 char name[100];
 };
 // fuction call by value
 void student(struct student s[])
 {
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter the student details:%d\n",i+1);

        printf("enter the roll no:");
        scanf("%d",&s[i].roll);
        printf("enter the marks:");
        scanf("%f",&s[i].marks);
        printf("enter the name:");
        scanf("%s",&s[i].name);
    }

 }
 // display function
 void display(struct student s[])
 {
    printf("\n student details\n");
    for(int i=0;i<3;i++){
    printf("%d %f %s",s[i].roll,s[i].marks,s[i].name);
 }
 }
 // main function
 int main()
 {
    struct student s[3];
    student(s);
    display(s);

    return 0;
 }