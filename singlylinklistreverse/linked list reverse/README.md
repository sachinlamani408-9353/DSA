Reverse a Singly Linked List in C
📌 Description

This program demonstrates how to reverse a singly linked list using the iterative method in the C programming language. It includes basic linked list operations such as:

Creating a node

Inserting nodes at the end

Displaying the list

Reversing the list

The program is suitable for data structures learning, exam preparation, and interview practice.

🧠 Algorithm to Reverse Linked List

Initialize three pointers:

prev = NULL

current = head

next = NULL

Traverse the list:

Store current->next in next

Reverse the link (current->next = prev)

Move prev and current one step forward

When traversal ends, prev becomes the new head

🧩 Program Structure

struct node – Defines the linked list node

createNode() – Allocates memory for a new node

insertAtEnd() – Inserts a node at the end of the list

display() – Displays the linked list

reverseList() – Reverses the linked list

main() – Handles user input and function calls

▶️ How to Compile and Run
Compile
gcc reverse_linked_list.c -o reverse
Run
./reverse
🧪 Sample Input
Enter number of nodes: 3
Enter value 1: 10
Enter value 2: 20
Enter value 3: 30
📤 Sample Output
Original List:
10 -> 20 -> 30 -> NULL


Reversed List:
30 -> 20 -> 10 -> NULL
⏱️ Complexity Analysis

Time Complexity: O(n)

Space Complexity: O(1)

🛠️ Requirements

C Compiler (GCC recommended)

Standard C Libraries (stdio.h, stdlib.h)

📚 Concepts Used

Singly Linked List

Dynamic Memory Allocation

Pointer Manipulation