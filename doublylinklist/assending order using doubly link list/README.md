README.md
# Doubly Linked List Sorting in C

This program demonstrates the implementation of a **Doubly Linked List** in C and performs **sorting in ascending and descending order**.

It allows the user to:
- Insert elements at the end of the list
- Display the original list
- Sort the list in ascending order
- Display the list in descending order

---

## 🚀 Features

- Dynamic memory allocation using `malloc()`
- Insertion at the end of the list
- Sorting using data swapping method
- Forward and backward traversal
- Clear formatted output

---

## 🧩 Data Structure Used

**Doubly Linked List**

Each node contains:
- `data` → stores integer value
- `prev` → pointer to previous node
- `next` → pointer to next node

```c
struct node {
    int data;
    struct node* prev;
    struct node* next;
};

⚙️ Functions Used
Function Name	Description
createnode()	Creates a new node
inseartend()	Inserts node at end
soart()	Sorts list in ascending order
display()	Displays original list
sorting()	Displays sorted list
dissending()	Displays list in descending order
💻 How to Compile and Run
Using GCC Compiler
gcc main.c -o dll_sort
./dll_sort

Using Online Compiler

Copy the code

Paste into any online C compiler

Run

📝 Input Format

Enter number of elements

Enter list values one by one

Example:

5
7 3 9 1 4

📤 Output Format

Displays:

Original Doubly Linked List

Ascending Order

Descending Order

Example Output:

---dobly linked list---
NULL<->7<->3<->9<->1<->4<->NULL

---assending order---
NULL<->1<->3<->4<->7<->9<->NULL

---dissending order---
NULL<->9<->7<->4<->3<->1<->NULL

🧠 Algorithm Used (Sorting)

Bubble Sort technique

Compares data values

Swaps data when needed

Time Complexity: O(n²)

📌 Important Notes

Sorting is done by swapping node data, not pointers

Program uses dynamic memory

No memory deallocation is implemented (can be added for improvement)

📚 Applications

Learning linked list concepts

Understanding bidirectional traversal

Practice for data structures exams

Demonstration of sorting in DLL

✨ Future Improvements

Add delete operation

Implement node swapping

Add menu-driven interface

Free allocated memory

Improve input validation