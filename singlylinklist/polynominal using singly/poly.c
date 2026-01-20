#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int coeff;
    int exp;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int c, int e) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = c;
    newNode->exp = e;
    newNode->next = NULL;
    return newNode;
}

// Insert node at end
void insertEnd(struct Node **head, int c, int e) {
    struct Node *temp = *head;
    struct Node *newNode = createNode(c, e);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Display polynomial
void display(struct Node *head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);
        if (head->next != NULL)
            printf(" + ");
        head = head->next;
    }
    printf("\n");
}

// Add two polynomials
struct Node* addPolynomials(struct Node *p1, struct Node *p2) {
    struct Node *p3 = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp == p2->exp) {
            insertEnd(&p3, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp) {
            insertEnd(&p3, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else {
            insertEnd(&p3, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }

    // Copy remaining terms
    while (p1 != NULL) {
        insertEnd(&p3, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insertEnd(&p3, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return p3;
}

// Main function
int main() {
    struct Node *P1 = NULL, *P2 = NULL, *P3 = NULL;

    // Polynomial 1: 5x^3 + 4x^2 + 2x + 1
    insertEnd(&P1, 5, 3);
    insertEnd(&P1, 4, 2);
    insertEnd(&P1, 2, 1);
    insertEnd(&P1, 1, 0);

    // Polynomial 2: 3x^3 + 1x^2 + 5
    insertEnd(&P2, 3, 3);
    insertEnd(&P2, 1, 2);
    insertEnd(&P2, 5, 0);

    printf("Polynomial 1: ");
    display(P1);

    printf("Polynomial 2: ");
    display(P2);

    P3 = addPolynomials(P1, P2);

    printf("Sum Polynomial: ");
    display(P3);

    return 0;
}
