Pointer-Based Array Traversal in C

This program demonstrates how to traverse an array using a pointer in C. Instead of accessing array elements using indices, the program uses pointer arithmetic to move through each element of the array.

📌 Features

Uses a pointer to iterate through an array

Demonstrates pointer arithmetic (ptr++)

Prints each array element using dereferencing (*ptr)

Simple and beginner-friendly example of pointers in C

🧩 How the Program Works

An integer array of 5 elements is declared:

int arr[5] = {10, 20, 30, 40, 50};


A pointer ptr is assigned to the first element of the array:

ptr = arr;


Inside a loop, the pointer is dereferenced to print each value, and then incremented to move to the next element.

🧪 Sample Output
Traversing array using pointer:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

🛠️ Compilation & Execution

Use GCC or any C compiler.

Compile the program:
gcc pointer_array.c -o pointer_array

Run the program:
./pointer_array

🔍 Key Concepts Demonstrated

Pointers and arrays relationship

Pointer initialization (ptr = arr)

Pointer dereferencing (*ptr)

Pointer arithmetic (ptr++)

Array traversal using a pointer instead of indices

📁 File Structure
pointer_array.c   → Main C program
README.md         → Documentation
