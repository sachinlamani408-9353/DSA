#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function to print the linked list
void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}

int main() {
    // -------- CREATE FIRST TWO NODES ----------
    struct node *head = malloc(sizeof(struct node));
    head->data = 99;
    head->link = NULL;

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = 88;
    newnode->link = NULL;

    head->link = newnode;

    printf("Initial List:\n");
    printList(head);

    // -------- INSERT NODE AFTER HEAD ----------
    struct node *insertNode = malloc(sizeof(struct node));
    insertNode->data = 77;

    // Insert after head
    insertNode->link = head->link;
    head->link = insertNode;

    printf("After Insertion:\n");
    printList(head);

    // -------- DELETE THE INSERTED NODE ----------
    struct node *temp = head;

    // Delete the node after head (node with data 77)
    struct node *deleteNode = head->link;
    head->link = deleteNode->link;
    free(deleteNode);

    printf("After Deletion:\n");
    printList(head);

    return 0;
}
