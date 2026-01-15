Singly Linked List in C

This project implements a Singly Linked List in the C programming language. It demonstrates dynamic memory allocation, pointer manipulation, and common linked list operations using a menu-driven program.

📌 Features

The program supports the following operations:

Insert a node at the beginning

Insert a node at a specific position

Delete a node from the beginning

Delete a node from the end

Display the linked list

Exit the program

🧱 Data Structure Used
struct node{
    int data;
    struct node *next;
};

data stores the integer value

next stores the address of the next node

⚙️ Functions Overview
1️⃣ createnewnode(int value)

Allocates memory dynamically using malloc

Initializes node data and next pointer

2️⃣ inseartatend(struct node* head, int value)

Inserts a new node at the end of the list

Traverses till the last node and links the new node

3️⃣ inseartatbeagining(struct node* head, int value)

Inserts a new node at the beginning

Updates the head pointer

4️⃣ inseartpos(struct node* head, int value, int pos)

Inserts a node at a given position

Handles insertion at the beginning separately

5️⃣ deletatbeagining(struct node* head)

Deletes the first node

Frees memory using free()

6️⃣ deletend(struct node* head)

Deletes the last node

Uses a prev pointer to update links

7️⃣ deletatposition(struct node* head, int pos)

Deletes a node at a specific position

Adjusts links and frees memory

8️⃣ display(struct node* head)

Traverses and prints the linked list

Output format:

10->20->30->NULL
▶️ How to Run

Copy the code into an online C compiler or local compiler

Compile the program:

gcc linkedlist.c -o linkedlist

Run the executable:

./linkedlist
🧪 Sample Output
---singly link list---
10->20->30->NULL
⚠️ Notes

Always checks for NULL before deletion to avoid segmentation faults

Uses dynamic memory allocation, so free() is essential

Typographical names like inseart and beagining are kept as-is from the original code