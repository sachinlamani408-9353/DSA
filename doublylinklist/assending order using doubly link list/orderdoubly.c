// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
// self reference node
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
// create the node
struct node*createnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory allocation is failed");
        exit(0);
    }
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=NULL;
    
    return newnode;
}
// inseart at the end
struct node *inseartend(struct node *head,int value){
    struct node*newnode=createnode(value);
    if(head==NULL){
        return newnode;
    }
    struct node*temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    
    return head;
}
//sorting the elements
struct node *soart(struct node *head){
    struct node*i,*j;
    int temp;
    for(i=head;i != NULL;i=i->next){
        for(j=i->next ;j != NULL ; j=j->next){
            if(i->data > j->data){
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    return head;
}
// display fuction for linked list
void display(struct node *head){
    struct node *temp=head;
    printf("NULL<->");
    while(temp != NULL){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    
    printf("<->NULL");
}
// display fuction sorting
void sorting(struct node*head){
    struct node *temp=head;
    printf("NULL<->");
  while(temp != NULL){
    printf("%d<->", temp->data);
    temp=temp->next;
  }
  printf("<->NULL");
}
// disending order
void dissending(struct node*head){
    struct node *temp=head;
    printf("NULL<->");
    while(temp->next != NULL){
        temp=temp->next;
    }
    while(temp != NULL){
        printf("%d<->", temp->data);
        temp=temp->prev;
    }
    printf("<->NULL");
}

int main() {
    struct node*head = NULL;
    int n, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);

        head =inseartend(head, value);
    }
printf("\n---dobly linked list---\n");
display(head);
    head = soart(head);
printf("\n---assending order---\n");
sorting(head);
    printf("\n---dissending order---\n");
  dissending(head); // Descending

    return 0;
}
