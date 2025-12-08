# Singly Linked List Program in C (Add & Delete Node)

This project demonstrates a **simple implementation of a Singly Linked List in C** with basic operations such as:

- Adding a node at the end  
- Deleting a node by value  
- Displaying the linked list  

It uses **dynamic memory allocation (`malloc`)** to create nodes at runtime.

---

## 📌 Features

- ✅ Dynamic node creation using `malloc`
- ✅ Add node at the end of the list
- ✅ Delete node by value
- ✅ Display the linked list
- ✅ Uses clean and beginner-friendly logic

---

## 🛠️ Technologies Used

- **Language:** C  
- **Compiler:** GCC / Turbo C / CodeBlocks / Dev-C++

---

## 📂 Program Structure

```text
createNode()   → Creates a new node using malloc  
addNode()      → Adds node at the end of the list  
deleteNode()   → Deletes a node by value  
display()      → Displays all nodes  
main()         → Driver function  
▶️ How to Run the Program
1. Compile the program
bash
Copy code
gcc linkedlist.c -o linkedlist
2. Run the executable
bash
Copy code
./linkedlist
🧪 Sample Output
text
Copy code
Linked List after adding nodes:
10 -> 20 -> 30 -> NULL

Linked List after deleting 20:
10 -> 30 -> NULL
❓ Why malloc is Used?
The number of nodes is not fixed

Memory is allocated at runtime

Each node is stored in heap memory

Ensures memory remains valid until freed using free()

✅ Learning Outcomes
After completing this program, you will understand:

Concept of self-referential structures

Dynamic memory allocation

Linked List creation & traversal

Insertion & Deletion operations

Memory deallocation using free()

