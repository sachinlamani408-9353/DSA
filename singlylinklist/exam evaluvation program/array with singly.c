#include <stdio.h>
#include <stdlib.h>
//self referance node
struct node{
    int data;
    struct node*next;
};
// create the new node
struct node*creatnewnode(int value){
struct node*newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL){
      printf("no array elements in linked list");
  }  
  newnode->data=value;
  newnode->next=NULL;
  return newnode;
}
// inseart at end
struct node*inseartatEnd(struct node*head,int value){
    struct node*newnode=creatnewnode(value);
    if(head==NULL){
    return newnode;
    }
    struct node*temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
//Display fuction
void display(struct node*head){
    struct node*temp=head;
    while(temp !=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("->NULL");
}
int main() {
   struct node*head=NULL;
 
  
     int n,i,value,sum=0;
   // enter the number of array elements
   printf("enter the number of array elements:");
   scanf("%d",&n);
    int arr[n];
   printf("enter the value of array:");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       sum+=arr[i];
       value=sum;
       head=inseartatEnd(head,value);
   }
   // inseart the sum of array elements in linked list
   printf("\n---linked list---\n");
   
       display(head);

   
    return 0;
}