#include <stdio.h>
#include <stdlib.h>
// creating node fucton
struct node{
     int data;
     struct node*link;
    } *top=NULL;

int isempty()
{
  if(top==NULL)
      return 1;
  else
      return 0;
}    
void push(int data) {
       struct node *newnode;
       newnode=malloc(sizeof(newnode));
       if(newnode==NULL){
        printf("stack overflow");
        exit(1);
       }
       newnode->data=data;
       newnode->link=NULL;
       newnode->link=top;
       top=newnode;
}

int pop(){
  struct node*temp;
  int val;
  if(isempty())
  {
    printf("stack underflow.");
    exit(1);
  }
  temp = top;
  val = temp->data;
  top = top->link;
  free(temp);
  temp = NULL;
  return val;
}

int peek()
{
  if(isempty())
  {
    printf("stack underflow");
    exit(1);
  }
  return top ->data;
}

void print(){
      struct node*temp;
      temp=top;
      if(isempty())
      {
        printf("stack underflow.");
        exit(1);
      }
      printf("the stack elements are:");
      while(temp){
        printf("%d",temp->data);
        temp=temp->link;
      } 
      printf("\n");
    }
    int main()
    {
        int choice , data;
        while(1){
            printf("1.push\n");
            printf("2.pop\n");
            printf("3.print the top elements\n");
            printf("4.print all the elements of stack\n");
            printf("5.quite\n");
            printf("enter the choice:");
            scanf("%d",&choice);
            
            switch(choice){
                case 1:
                       printf("enter the element to pushed:");
                        scanf("%d",&data);
                         push(data);
                            break;
                case 2 :
                      data = pop();
                      printf("daleted elements is %d\n",data);
                      break;

                case 3:
                     printf("the topmost element of the stack is %d\n",peek());
                     break;
                
                case 4:
                    print();
                    break;
                case 5:
                    exit(1);
                default :
                    printf("wrong choice\n");             
            }
        }
     return 0;
            }