#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student node
struct Student {
    int roll;
    char name[30];
    float marks;
    struct Student *prev;
    struct Student *next;
};

// Create a new node
struct Student* createNode(int roll, char name[], float marks) {
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));
    newNode->roll = roll;
    strcpy(newNode->name, name);
    newNode->marks = marks;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
struct Student* insertEnd(struct Student* head, int roll, char name[], float marks) {
    struct Student* newNode = createNode(roll, name, marks);

    if (head == NULL)
        return newNode;

    struct Student* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

//Next student
struct Student* nextStudent(struct Student *head){
    if(head == NULL || head->next ==NULL){
        printf("No next studnet data present");
        return head;
    }
    
    head = head->next;
    printf("Student roll number: %d",head->roll);
    return head;
}
//Next student
struct Student* prevStudent(struct Student *head){
    if(head == NULL || head->prev ==NULL){
        printf("No prev studnet data present");
        return head;
    }
    
    head = head->prev;
    printf("Student roll number: %d",head->roll);
    return head;
}

// Main function
int main() {
    struct Student* head = NULL;
    int n, roll, searchRoll;
    char name[30];
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Marks: ");
        scanf("%f", &marks);

        head = insertEnd(head, roll, name, marks);
    }
    
    //displayForward(head);

    printf("Student 1: %d",head->roll);
    int choice;
    while(1){
        printf("Menu\n");
        printf("press 1.Next student\n");
        printf("press 2.Prev Student\n");
        printf("press 3.Exit\n");
        printf("Enter chioce");
        scanf("%d",&choice);
        switch(choice){
            case 1: head = nextStudent(head);break;
            case 2: head = prevStudent(head); break;
            case 3: exit(0);
            default: printf("Invalid choice");
        }
        
    }
     
    return 0;
}