# Doubly Linked List in C (Insert, Display, Reverse)

## 📌 Overview
This program demonstrates the implementation of a **Doubly Linked List** in C.  
It allows the user to:
- Create nodes dynamically
- Insert nodes at the end of the list
- Display the list
- Reverse the linked list
- Display the reversed list

The program uses dynamic memory allocation and pointer manipulation.

---

## 🧱 Data Structure Used
### Doubly Linked List
Each node contains:
- `data` → integer value
- `prev` → pointer to the previous node
- `next` → pointer to the next node

```c
struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};
⚙️ Functions Description
1️⃣ createNode(int value)
Allocates memory for a new node

Assigns data

Initializes prev and next to NULL

Returns pointer to the new node

2️⃣ insertEnd(struct NODE *head, int value)
Inserts a new node at the end of the list

If the list is empty, the new node becomes the head

Returns updated head pointer

3️⃣ display(struct NODE *head)
Traverses the list from head to end

Displays the list in the format:

rust
Copy code
NULL <-> data <-> data <-> NULL
4️⃣ reverseList(struct NODE *head)
Reverses the linked list

Changes the direction of next pointers

Returns the new head of the reversed list

🧪 Program Flow
User enters the number of nodes

User inputs values for each node

Original doubly linked list is displayed

Linked list is reversed

Reversed list is displayed

▶️ Sample Output
rust
Copy code
How many nodes? 3
Enter the value: 10
Enter the value: 20
Enter the value: 30

Doubly Linked list
NULL <->10 <->20 <->30 <->NULL

Reversed List
NULL <->30 <->20 <->10 <->NULL
🛠️ Compilation & Execution
bash
Copy code
gcc doubly_linked_list.c -o dll
./dll
📚 Key Concepts Used
Structures

Pointers

Dynamic Memory Allocation (malloc)

Linked List Traversal

List Reversal Algorithm

✅ Conclusion
This program is a beginner-friendly implementation of a doubly linked list in C.
It clearly demonstrates node creation, insertion, traversal, and reversal operations.