#include <stdio.h>
#include <stdlib.h>

//self referance node
struct node {
    int data;
    struct node *next;
};

// create the new node
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

// inseart at the end node
struct node* insertAtEnd(struct node* head, int value) {
    struct node* newnode = createNode(value);
    if (head == NULL)
        return newnode;

    struct node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    return head;
}

// display fuction
void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// reverse the linked list
struct node* reverseList(struct node* head) {
    struct node *prev = NULL, *current = head, *next = NULL;

    while (current != NULL) {
        next = current->next;   // Store next
        current->next = prev;   // Reverse link
        prev = current;         // Move prev
        current = next;         // Move current
    }
    return prev;   // New head
}

// Main function
int main() {
    struct node* head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        head = insertAtEnd(head, value);
    }

    printf("\nOriginal List:\n");
    display(head);

    head = reverseList(head);

    printf("\nReversed List:\n");
    display(head);

    return 0;
}
