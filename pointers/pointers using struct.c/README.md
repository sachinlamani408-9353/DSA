# Student Structure Program in C (Using Pointer & Function)

## 📌 Overview
This C program demonstrates the use of:
- **Structures**
- **Pointers to structures**
- **Passing structure pointers to functions**
- **Conditional logic inside functions**

The program accepts student details (Name, Roll Number, Marks) and displays them.  
A separate `display()` function prints student details **only if the student passes** (marks > 20).

---

## 🧱 Structure Definition
```c
struct student {
    int Roll;
    float marks;
    char name[100];
};
🔧 Functions Used
display()
c
Copy code
void display(struct student* ptr, float marks);
Purpose:

Receives a pointer to a structure

Checks whether marks are greater than 20

Displays student details if passed

Otherwise prints "student fail"

▶️ Program Flow
Declare a structure variable

Create a pointer to the structure

Read student details using the pointer

Display entered details

Call display() function to check pass/fail

💻 Complete Source Code
c
Copy code
#include <stdio.h>

// structure
struct student {
    int Roll;
    float marks;
    char name[100];
};

// display function
void display(struct student* ptr, float marks) {
    if (marks > 20) {
        printf("%s\n", ptr->name);
        printf("%d\n", ptr->Roll);
        printf("%f\n", ptr->marks);
    } else {
        printf("student fail");
    }
}

// main function
int main() {
    struct student s;
    struct student *ptr;
    float marks;

    ptr = &s;

    printf("Enter the student details\n");

    printf("Enter the name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll no: ");
    scanf("%d", &ptr->Roll);

    printf("Enter the marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent details\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->Roll);
    printf("Marks: %.2f\n", ptr->marks);

    // function call
    printf("\nUsing display function\n");
    display(ptr, ptr->marks);

    return 0;
}
🧪 Sample Output
yaml
Copy code
Enter the student details
Enter the name: Sachin
Enter Roll no: 101
Enter the marks: 85

Student details
Name: Sachin
Roll: 101
Marks: 85.00

Using display function
Sachin
101
85.000000
📚 Concepts Covered
Structures in C

Pointer to structure

Arrow operator (->)

Passing structure pointer to function

Conditional statements

