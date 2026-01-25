# Student Management Using Singly Linked List (C)

## 📌 Overview
This project demonstrates how to **store and manage student records** using a **Singly Linked List (SLL)** in the C programming language.

Each student record contains:
- Roll number
- Marks
- Name

The program uses **dynamic memory allocation (`malloc`)** and supports **insertion and display operations** through a menu-driven approach.

---

## 🧠 Concepts Used
- Singly Linked List
- Self-referential structures
- Dynamic memory allocation
- Functions in C
- Pointers
- Menu-driven programming

---

## 📂 Structure Definition
```c
struct student {
    int roll;
    float marks;
    char name[100];
    struct student *next;
};
⚙️ Features
✅ Insert Student at End
Used while initially entering student records.

Maintains insertion order.

✅ Insert Student at Beginning
Adds a new student at the start of the linked list.

Time Complexity: O(1)

✅ Display Student Details
Traverses the linked list and prints all student records.

✅ Dynamic Memory Allocation
Memory is allocated at runtime using malloc().

📋 Menu Options
markdown
Copy code
1. Insert at Beginning
2. Display Student Details
3. Exit
▶️ Sample Output
pgsql
Copy code
enter the how meany students:2
enter the student no 1:
enter the roll:1
enter the marks:85
enter the name:Ravi

enter the student no 2:
enter the roll:2
enter the marks:90
enter the name:Anita

1.insert beginning
2.display
3.exit

student details
Roll:2
Marks:90.00
Name:Anita
Roll:1
Marks:85.00
Name:Ravi
🧪 How to Compile and Run
Compile
bash
Copy code
gcc student_linked_list.c -o student
Run
bash
Copy code
./student
📌 Important Notes
The program uses scanf("%s", name), so names cannot contain spaces.

The linked list grows dynamically; no fixed size limitation.

Insert at beginning reverses the order of display.

🔥 Possible Enhancements
Delete student record

Search by roll number

Sort students by marks

Free allocated memory

Allow names with spaces (fgets())

📚 Learning Outcome
By studying this program, you will understand:

How linked lists work internally

How to pass and return pointers from functions

How to manage structured data dynamically in C