#include <stdio.h>
//stracture 
 struct student{
    int roll;
     float marks;
     char name[100];
 };
 int main(){
    struct student s[3]; //  array declartion using struct
    int i;
    // travers the array
    for(i=0;i<3;i++){
        printf("enter the student details:%d\n",i+1);
        printf("enter the roll no:");
        scanf("%d",&s[i].roll);
        
      
        
        printf("enter the marks :");
        scanf("%.2f",&s[i].marks);
        
        printf("enter the name:");
        scanf("%s",&s[i].name);
        
      
     }
     // print the student details
     printf("\n");
printf("student details\n");
 for (int i = 0; i < 3; i++) {
      printf("roll:%d\nmarks:%.2f\nname:%s\n",s[i].roll,s[i].marks,s[i].name);
      }

return 0;
 }