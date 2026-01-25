#include <stdio.h>
//stracture 
struct student{
    int Roll;
    float marks;
    char name[100];
};
// display fuction 
void display(struct student* ptr,float marks){
    if(marks>20){
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->Roll);
    printf("%f\n",ptr->marks);
    }
    else{
        printf("student fail");
    }
}
// main fuction
int main(){
  struct student s;
  struct student *ptr;// declare the fuction
  int marks;
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
// printing the student value
  printf("\nstudent details\n");
   printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->Roll);
    printf("Marks: %.2f\n", ptr->marks);
    
    // using function
    printf("\nusing display fuction\n");
    display(ptr,marks);
  return 0;


}