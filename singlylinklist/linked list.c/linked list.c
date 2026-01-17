// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
// self referance code
struct node{
    int data;
    struct node*next;
};
struct node*createnode(int value){
 struct node*newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL){
      printf("memory alloction is flied");
  }
  newnode->data=value;
  newnode->next=NULL;
}
// inseart at the end 
struct node*inseartend(struct node*head,int value){
    struct node*newnode=createnode(value);
    if(head==NULL){
        return newnode;
}
struct node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newnode;
return head;
}
// display fuction
struct node*display(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("->NULL");
}
// inseart at beagining
struct node*beagining(struct node*head,int value){
    struct node*newnode=createnode(value);
    newnode->next=head;
    head=newnode;
    return head;
}
// delet at beagining
struct node*end(struct node*head){
    if(head==NULL){
        printf("list is emty");
        return head;
    }
    struct node*temp=head;
    head=head->next;
    free(temp);
    return head;
}
// inseart at potion
struct node*position(struct node*head,int value,int pos){
    struct node*newnode=createnode(value);
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return newnode;
    }
    struct node*temp=head;
    for(int i=0;i<pos-1;i++){
        if(head==NULL){
            printf("out of range");
            free(newnode);
            return head;
        }
        temp=temp->next;
    }
    newnode->next=temp->next;
        temp->next=newnode;
        return head;
        
}
// reverse fuction
struct node*reverselist(struct node*head){
      struct node*prev=NULL;
      struct node*current=head;
      struct node*next=NULL;
      while(current !=NULL){
          next=current->next;
          current->next=prev;
          prev=current;
          current=next;
      }
      return prev;
}
int main() {
    struct node*head=NULL;
   int value ,n;
   printf("enter the number of node:");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       printf("enter the value of node %d:",i+1);
       scanf("%d",&value);
       head=inseartend(head,value);
   }
    
    printf("\n---linked list---\n");
    display(head);
    
    head=beagining(head,55);
    printf("\n---inseart at beagning---\n");
    display(head);
    
    head=position(head,98,2);
    printf("\n---position---\n");
    display(head);
    
    head=end(head);
    printf("\n---after delet---\n");
    display(head);
    
    head=reverselist(head);
    printf("\n---reverse linked list---\n");
     display(head);
    

    return 0;
}