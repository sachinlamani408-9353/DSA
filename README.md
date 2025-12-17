# Student Record Navigation Using Doubly Linked List (C)

## 📌 Overview
This program demonstrates the implementation of a **Doubly Linked List** in **C** to store and navigate student records.  
Each student record contains **Roll Number, Name, and Marks**.

The program allows the user to:
- Insert student records dynamically
- Move **forward (Next Student)** and **backward (Previous Student)** through the list using a menu

---

## 🧱 Data Structure Used
**Doubly Linked List**

Each node stores:
- Student roll number
- Student name
- Student marks
- Pointer to previous node
- Pointer to next node

```c
struct Student {
    int roll;
    char name[30];
    float marks;
    struct Student *prev;
    struct Student *next;
};
⚙️ Functions Description
1️⃣ createNode()
Creates a new student node and initializes all values.

c
Copy code
struct Student* createNode(int roll, char name[], float marks);
2️⃣ insertEnd()
Inserts a new student node at the end of the doubly linked list.

c
Copy code
struct Student* insertEnd(struct Student* head, int roll, char name[], float marks);
3️⃣ nextStudent()
Moves to the next student record and displays the roll number.

c
Copy code
struct Student* nextStudent(struct Student *head);
✔️ Displays a message if no next node exists.

4️⃣ prevStudent()
Moves to the previous student record and displays the roll number.

c
Copy code
struct Student* prevStudent(struct Student *head);
✔️ Displays a message if no previous node exists.

🖥️ Program Flow
User enters the number of students

Student details are stored in a doubly linked list

Menu allows navigation:

Next student

Previous student

Exit program

📋 Sample Menu
mathematica
Copy code
Menu
1. Next student
2. Prev Student
3. Exit
Enter choice:
📈 Advantages
Bidirectional traversal

Efficient navigation between records

Dynamic memory allocation

Suitable for applications like record browsing

⚠️ Limitations
No deletion or search functionality

No full display of all student details

Memory not freed before exit

🛠️ Compilation & Execution
bash
Copy code
gcc student_dll.c -o student_dll
./student_dll
📚 Learning Outcomes
Understanding doubly linked list implementation

Pointer manipulation

Menu-driven programming

Dynamic memory management in C