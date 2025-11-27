📘 Pass-by-Reference Calculator (C Program)

This project is a simple calculator implemented in C, demonstrating the concept of pass-by-reference using pointers.
The program performs four basic arithmetic operations:

Addition

Subtraction

Multiplication

Division

📂 Features

Takes two numbers as input from the user

Allows the user to choose an operation (1–4)

Uses separate functions for each operation

Demonstrates pointer usage (double *x)

Handles division by zero safely

Displays the final result with two decimal places

🛠️ How It Works

Each arithmetic function receives the addresses of the two numbers and the result variable.
Example:

addvalue(&a, &b, &result);


Inside each function, the actual memory values are accessed using the dereference operator *.

▶️ Compilation & Execution
Compile
gcc calculator.c -o calculator

Run
./calculator

📥 User Input Format

The program expects:

Two numbers

An operation choice

1 → Addition

2 → Subtraction

3 → Multiplication

4 → Division

Example:

Enter two numbers: 10 5
Enter the choice: 1

📤 Sample Output
Pass by Reference Calculator
Enter two numbers: 10 5
enter the choice:1
Result = 15.00

🧾 Code Overview

The project contains:

Four arithmetic functions (addvalue, subvalue, mulvalue, divvalue)

A switch statement to select the operation

Pointer-based parameter passing

🛡️ Error Handling

✔ Division by zero is checked
✔ Invalid choice results in a friendly error message