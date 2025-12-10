Linked List Insertion & Deletion (C Program)

This project demonstrates basic singly linked list operations in C, including:

Creating nodes

Linking nodes

Printing the linked list

Inserting a node after the head

Deleting a specific node (the inserted node)

It is a simple example program ideal for beginners learning dynamic memory allocation and pointer manipulation.

📂 Code Overview
✔ Node Structure

Each linked list node contains:

an integer data

a pointer link to the next node

struct node {
    int data;
    struct node *link;
};

🔧 Functions Used
*1. printList(struct node head)

This function prints the entire linked list in the format:

99 -> 77 -> 88 -> NULL


It uses a temporary pointer to traverse the list until it reaches NULL.

🧠 Program Flow
1️⃣ Creating the first two nodes
head = 99  
newnode = 88  
head -> newnode -> NULL

2️⃣ Inserting a new node (77) after head

Steps:

Create insertNode

Point it to the node after head

Link head to this new node

Result:

99 -> 77 -> 88 -> NULL

3️⃣ Deleting the inserted node (77)

Steps:

Identify node after head

Skip it using head->link = deleteNode->link

Free memory

Result:

99 -> 88 -> NULL

📤 Program Output
Initial List:
99 -> 88 -> NULL

After Insertion:
99 -> 77 -> 88 -> NULL

After Deletion:
99 -> 88 -> NULL

📝 Key Concepts Learned

How to dynamically allocate memory (malloc)

How to link nodes in a singly linked list

How to insert a node in the middle

How to delete a node properly

How to avoid memory leaks with free()