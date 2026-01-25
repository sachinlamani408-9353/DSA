// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
//self referance node
struct node{
    int data;
    struct node*next;
};
// create the node
struct node*createnewnode(int value){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory not allocated");
        exit(1);
    }
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
// inseart at the end
struct node*inseartatend(struct node*head,int value){
    struct node*newnode=createnewnode(value);
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
void display(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
  printf("->NULL");
}
// inseart at beagining
struct node*inseartatbeagining(struct node*head,int value){
    struct node*newnode=createnewnode(value);
    if(head==NULL){
        return newnode;
    }
    newnode->next=head;
    return newnode;
}
// inseart at possition
struct node*inseartpos(struct node*head,int value,int pos){
    struct node*newnode=createnewnode(value);
    if(pos==1){
        return inseartatbeagining(head,value);
    }
    struct node*temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(head==NULL){
        printf("out of rang");
        return inseartatend(head,value);
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
// dealet at beagining
struct node*deletatbeagining(struct node*head){
    if(head == NULL){
        printf("node is empty");
        return head;
    }
    struct node*temp=head;
    head=head->next;
    free(temp);
    printf("\n---first node is deleteded---\n");
    return head;
}
// delete the end node
struct node*deletend(struct node*head){
    if(head==NULL){
        printf("node is emty");
        return head;
    }
    if(head->next==NULL){
        free(head);
        printf("delet remaining node");
        return NULL;
    }
    struct node*temp=head;
    struct node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    printf("last node is deleted");
    return head;
}
// delet at position
struct node*deletatposition(struct node*head,int pos){
    if(head==NULL){
        printf("node is emty");
        return head;
    }
    if(pos==1){
        return deletatbeagining(head);
    }
    struct node*temp=head;
    struct node*prev=NULL;
    for(int i=1;i<pos-1&&temp->next!=NULL;i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    printf("node is deleted at:%d",pos);
    free(temp);
    return head;
}
int main() {
    struct node*head=NULL;
    int n,i,value,choice,pos;
    printf("enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the value of elements %d:",i+1);
        scanf("%d",&value);
        head=inseartatend(head,value);
    }
  
    while(1){
        printf("\n1.inseart at beaging\n2.inseart at possition\n3.delet beagining\n4.delet at end\n5.display\n6.exit\n");
        
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("enter the new value :");
                scanf("%d",&value);
                head=inseartatbeagining(head,value);
                break;
            case 2:
                   printf("enter the value:");
                   scanf("%d",&value);
                   printf("enter the possition:");
                   scanf("%d",&pos);
                   head=inseartpos(head,value,pos);
                   break;
            case 3:
                   head=deletatbeagining(head);
                   break;
            case 4:
                  head=deletend(head);
                  break;
            case 5:
                   printf("\n---singly link list---\n");
                   display(head);
                   break;
            case 6:
                  printf("---program completed---");
                  exit(1);
        }
        
    }
    
    return 0;
}