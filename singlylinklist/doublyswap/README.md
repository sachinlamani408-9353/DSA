# Doubly Linked List Sorting in C

This program demonstrates the implementation of a **Doubly Linked List** in C and performs **sorting in ascending and descending order** using data swapping.

---

## 📌 Features

- Create a doubly linked list
- Insert nodes at the end
- Display the list
- Sort the list in:
  - ✅ Ascending Order
  - ✅ Descending Order

---

## 🧱 Data Structure Used

### Doubly Linked List
Each node contains:
- `data` → integer value
- `prev` → pointer to previous node
- `next` → pointer to next node

```c
struct node {
    int data;
    struct node *prev;
    struct node *next;
};
⚙️ Functions Overview
1. createnode(int value)
Allocates memory for a new node

Initializes data and pointers

2. inseartend(struct node* head, int value)
Inserts a new node at the end of the list

3. display(struct node* head)
Displays the doubly linked list in the format:

NULL <-> data <-> data <-> NULL
4. ascendingorder(struct node* head)
Sorts the list in ascending order

Uses bubble sort logic

Swaps node data (not pointers)

5. descendingorder(struct node* head)
Sorts the list in descending order

Uses bubble sort logic

▶️ Program Flow
Read number of elements from user

Insert elements into doubly linked list

Display original list

Sort and display list in ascending order

Sort and display list in descending order

🧪 Sample Input
Enter number of elements: 5
Enter element 1: 4
Enter element 2: 1
Enter element 3: 3
Enter element 4: 5
Enter element 5: 2
📤 Sample Output
--- Doubly Linked List ---
NULL<->4<->1<->3<->5<->2<->NULL

--- Ascending Order ---
NULL<->1<->2<->3<->4<->5<->NULL

--- Descending Order ---
NULL<->5<->4<->3<->2<->1<->NULL