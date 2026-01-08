# Student Details Program in C (Array of Structures)

## 📌 Description
This C program demonstrates the use of **arrays of structures** and **functions** to store and display student information such as **roll number, marks, and name**.  
The program accepts input for multiple students and prints their details using separate functions.

---

## 🧱 Structure Definition
```c
struct student {
    int roll;
    float marks;
    char name[100];
};
roll → Student roll number

marks → Student marks

name → Student name

🔁 Functions Used
1️⃣ student()
c
Copy code
void student(struct student s[])
Accepts an array of structures

Reads details of 3 students using a loop

Stores input data in the structure array

2️⃣ display()
c
Copy code
void display(struct student s[])
Accepts the same array of structures

Displays student details using a loop

🚀 Program Flow
Define the student structure

Declare an array of structures in main()

Call student() to input data

Call display() to print stored data

🧪 Sample Output
pgsql
Copy code
enter the student details:1
enter the roll no:101
enter the marks:85
enter the name:Sachin

enter the student details:2
enter the roll no:102
enter the marks:90
enter the name:Rahul

enter the student details:3
enter the roll no:103
enter the marks:88
enter the name:Amit

student details
101 85.00 Sachin
102 90.00 Rahul
103 88.00 Amit
🧠 Key Concepts Covered
Structures in C

Arrays of structures

Passing arrays to functions

Call by reference (implicit for arrays)

Input/output using scanf() and printf()

⚠️ Important Notes
Arrays are passed by reference in C

scanf("%s", s[i].name) does not require &

Maximum student count is fixed to 3 (can be modified)