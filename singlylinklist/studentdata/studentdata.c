// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// self referance node
struct student{
    int roll;
    float marks;
    char name[100];
    struct student*next;
};
// inseart student deatails
struct student *createnode(int roll,float marks,char name[]){
    struct student*newnode=(struct student*)malloc(sizeof(struct student));
    if(newnode == NULL){
        printf("student node get admission");
        exit(1);
    }
    newnode->roll=roll;
    newnode->marks=marks;
    strcpy(newnode->name,name);
    newnode->next=NULL;
    return newnode;
}
//inseart node at the end
struct student*inseartatEnd(struct student*head,int roll,float marks,char name[]){
    struct student*newnode=createnode(roll,marks,name);
    if(head==NULL){
        return newnode;
    }
    struct student*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    
    return head;
}
// inseart at begining
struct student*insearatbegining(struct student*head,int roll,float marks,char name[]){
    struct student*newnode=createnode(roll,marks,name);
    if(head==NULL){
        return newnode;
    }
    newnode->next=head;
    return newnode;
}
// display student details
void display(struct student*head){
    struct student*temp=head;
    if(temp==NULL){
        printf("no student details found");
        return ;
    }
    while(temp!=NULL){
        printf("Roll:%d\n",temp->roll);
        printf("Marks:%.2f\n",temp->marks);
        printf("Name:%s\n",temp->name);
        temp=temp->next;
        
    }
}
int main() {
    struct student*head=NULL;
    int roll;
    float marks;
    char name[100];
    int n,i,choice;
    
    printf("enter the how meany students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the student no %d:\n",i+1);
        printf("enter the roll:");
        scanf("%d",&roll);
        printf("enter the marks:");
        scanf("%f",&marks);
        printf("enter the name:");
        scanf("%s",&name);
        head=inseartatEnd(head,roll,marks,name);
    }
    printf("1.inseart beaginind\n2.display\n3.Exit\n");
    while(1){
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("enter the new student:\n");
                 printf("enter the roll:");
                 scanf("%d",&roll);
                 printf("enter the marks:");
                 scanf("%f",&marks);
                 printf("enter the name:");
                 scanf("%s",&name);
                 head=insearatbegining(head,roll,marks,name);
             break;
             case 2:
             printf("\nstudent details\n");
             display(head);
             break;
             case 3:exit(1);
                     
        }
}
    return 0;
}