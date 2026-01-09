#include <stdio.h>
struct student{
    int Roll;
    float marks;
    char name[100];
};
int main(){
  struct student s;
  struct student *ptr;
;
   ptr=&s;
  printf("enter the student details\n");

  printf("enter the name:");
  scanf("%s",&ptr->name);

   
  printf("enter Roll no:");
  scanf("%d",&ptr->Roll);

  printf("enter the marks:");
  scanf("%f",&ptr->marks);

  
  printf("\n");

  printf("\nstudent details\n");
   printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->Roll);
    printf("Marks: %.2f\n", ptr->marks);
  return 0;


}