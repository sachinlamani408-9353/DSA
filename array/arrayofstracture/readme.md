# Array of Structures in C – Student Details Program

## 📌 Description
This program demonstrates the use of **arrays of structures in C**.  
It stores and displays details of multiple students such as:

- Roll number  
- Marks  
- Name  

The program takes input for **3 students** and then prints their details.

---

## 🧱 Structure Definition
The program uses a `struct student` to group related data:

```c
struct student {
    int roll;
    float marks;
    char name[100];
};
⚙️ How the Program Works
Declares an array of structures to store student data.

Uses a for loop to input details for each student.

Uses another for loop to display the stored data.

▶️ Sample Code
c
Copy code
#include <stdio.h>

// structure
struct student {
    int roll;
    float marks;
    char name[100];
};

int main() {
    struct student s[3]; // array of structures
    int i;

    // Input student details
    for (i = 0; i < 3; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter name: ");
        scanf("%s", s[i].name);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Roll: %d\nMarks: %.2f\nName: %s\n\n",
               s[i].roll, s[i].marks, s[i].name);
    }

    return 0;
}
🖥️ Sample Output
yaml
Copy code
Enter details of student 1
Enter roll number: 1
Enter marks: 85.5
Enter name: Sachin

Enter details of student 2
Enter roll number: 2
Enter marks: 90
Enter name: Rahul

Enter details of student 3
Enter roll number: 3
Enter marks: 78
Enter name: Amit

Student Details:
Roll: 1
Marks: 85.50
Name: Sachin

Roll: 2
Marks: 90.00
Name: Rahul

Roll: 3
Marks: 78.00
Name: Amit
📚 Concepts Used
Structures in C

Arrays of structures

scanf() and printf()

Looping (for loop)

📝 Notes
scanf("%f", &marks) is used for float input.

scanf("%s", name) reads a single word (no spaces).

For names with spaces, fgets() can be used.

✅ Conclusion
This program is a beginner-friendly example to understand how structures and arrays work together in C programming.