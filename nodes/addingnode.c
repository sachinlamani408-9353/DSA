#include <stdio.h>
#include <stdlib.h>

// Node structure
struct NODE {
    int data;
    struct NODE *next;
};

// Create new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Add node at end
struct NODE* addNode(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

// Delete node by value
struct NODE* deleteNode(struct NODE *head, int value) {
    struct NODE *temp = head;
    struct NODE *prev = NULL;

    // If first node is to be deleted
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return head;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);

    return head;
}

// Display list
void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct NODE *head = NULL;
    int value;

    // Add nodes
    head = addNode(head, 10);
    head = addNode(head, 20);
    head = addNode(head, 30);

    printf("Linked List after adding nodes:\n");
    display(head);

    // Delete node
    head = deleteNode(head, 20);

    printf("Linked List after deleting 20:\n");
    display(head);

    return 0;
}
