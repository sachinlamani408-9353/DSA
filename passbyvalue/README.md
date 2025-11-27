Pass by Value Calculator (C Program)

This project demonstrates how to perform arithmetic operations in C using pass-by-value.
Unlike pass-by-reference, the functions here work with copied values, not pointers.

The program takes two numbers and performs addition, subtraction, multiplication, or division based on user choice.

📌 Features

Uses pass-by-value functions

Supports:

Addition

Subtraction

Multiplication

Division (with zero check)

Displays output with 2 decimal precision

📂 File Description
main.c

Contains:

Functions: addValue, subValue, mulValue, divValue

Menu-driven operation selector

Demonstrates arithmetic using pass-by-value

🧠 How the Program Works

User enters two numbers.

User chooses an operation:

1 → Addition  
2 → Subtraction  
3 → Multiplication  
4 → Division


Program calls the corresponding function.

Function computes and returns the result.

Result is printed using printf.

📜 Example Output
Pass by value calculator
Enter the two numbers: 8 4
Enter your choice: 3
Result = 32.00

🛠 Compilation & Execution

Use the terminal to compile and run:

gcc main.c -o calculator
./calculator

🧩 Functions Used
Function	Description
addValue(x, y)	Returns x + y
subValue(x, y)	Returns x - y
mulValue(x, y)	Returns x * y
divValue(x, y)	Returns x / y (prints error if y = 0)
⚠️ Notes

The division function prints "error" if the second number is zero.

Functions return values directly instead of using pointers.