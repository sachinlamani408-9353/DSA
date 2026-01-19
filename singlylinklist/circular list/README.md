# Sorted Singly Linked List in C

This program implements a **Sorted Singly Linked List** in **C**, where elements are inserted in **ascending order** automatically.

---

## 📌 Features

- Dynamic memory allocation using `malloc`
- Automatic insertion in sorted (ascending) order
- Simple and exam-friendly implementation
- Uses singly linked list structure

---

## 🧩 Data Structure Used

Each node contains:
- `data` → integer value
- `next` → pointer to the next node

```c
struct node {
    int data;
    struct node *next;
};
⚙️ Functions Implemented
1️⃣ createNode(int value)
Allocates memory for a new node

Initializes data and sets next to NULL

2️⃣ insertSorted(struct node* head, int value)
Inserts a node into the linked list

Maintains ascending order of elements

3️⃣ display(struct node* head)
Traverses and prints the linked list

▶️ How the Program Works
Start with an empty list (head = NULL)

Insert elements using insertSorted()

The list remains sorted after every insertion

Display the final sorted list

🧪 Sample Input (from code)
c
Copy code
insertSorted(head, 30);
insertSorted(head, 10);
insertSorted(head, 20);
insertSorted(head, 5);
✅ Output
rust
Copy code
5 -> 10 -> 20 -> 30 -> NULL