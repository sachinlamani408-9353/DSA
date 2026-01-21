// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
// self referance node
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
//create node
struct node*createnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory is not allocate");
        exit(0) ;
    }
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
//inseart at node at end
struct node*inseartend(struct node*head,int value){
    struct node*newnode=createnode(value);
    if(head == NULL){
        return newnode;
    }
    struct node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
   newnode->prev=temp;
    return head;
}
// display fuction for doubly linked list
void display(struct node*head){
    if(head==NULL){
        printf("link is emty");
    }
    printf("NULL<->");
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("<->NULL");
}
// Sort in ascending order 
void ascendingorder(struct node* head) {
    struct node *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}
// Sort in discending order 
void descendingorder(struct node* head) {
    struct node *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data < j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}
int main() {
    struct node*head=NULL;
    int n,i,value;
    printf("enter the no elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the value of elements%d:",i+1);
        scanf("%d",&value);
        head=inseartend(head,value);
    }
    printf("\n---doubly linked list---\n");
    display(head);
   
    printf("\n---asending order---\n");
     ascendingorder(head);
    display(head);
    printf("\n---desending order---\n");
    descendingorder(head);
    display(head);

    return 0;
}