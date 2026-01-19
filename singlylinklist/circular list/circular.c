#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *next;
};

// Create a new node
struct node* createNode(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

// Insert node in sorted order (ascending)
struct node* insertSorted(struct node* head, int value) {
    struct node* newnode = createNode(value);

    if (head == NULL || value <= head->data) {
        newnode->next = head;
        return newnode;
    }

    struct node* temp = head;
    while (temp->next != NULL && temp->next->data < value) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

// Display list
void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main (for testing)
int main() {
    struct node* head = NULL;

    head = insertSorted(head, 30);
    head = insertSorted(head, 10);
    head = insertSorted(head, 20);
    head = insertSorted(head, 5);

    display(head);

    return 0;
}
