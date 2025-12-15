#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
     struct node*prev;
    struct node*next;
   };
struct node*createnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
struct node* insertEnd(struct node *head, int value) {
    struct node *newnode = createnode(value);

    // If list is empty
    if (head == NULL) {
        return newnode;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;

    return head;
}
void display(struct node*head){
    struct node*temp=head;
    printf("NULL<->");
    while(temp!=NULL){
        printf("%d<->",temp->data);
        
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
   struct node*head=NULL;
   int n,value,i;

   printf("How many nodes?:");
   scanf("%d", &n);
   
   for(i=0;i<n;i++){
    printf("enter the value of node %d:",i+1);
    scanf("%d", &value);
    head=insertEnd(head,value);
   }
   printf("\nDoubly linked list(forward traversal):\n");
   display(head);
   return 0;
}