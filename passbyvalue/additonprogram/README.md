Addition Program in C

This is a simple C program that takes two integers as input from the user, sends them to a function, adds them, and displays the result.

📌 Features

Accepts two numbers from the user

Uses a user-defined function (addTwoNumbers)

Returns the sum of two integers

Demonstrates function prototype, function call, and function definition

🧩 How the Program Works

The user enters the first and second integer.

The addTwoNumbers() function receives both numbers.

The function returns their sum.

The main program prints the result.

🧪 Sample Input/Output
Addition Program
Enter the first number: 10
Enter the second number: 20
Sum of 10 and 20 is: 30

📁 File Structure
addition.c      → The main C program file
README.md       → Documentation for the program

🛠️ Compilation & Execution

Use GCC or any C compiler.

To Compile:
gcc addition.c -o addition

To Run:
./addition

📝 Function Details
int addTwoNumbers(int firstNumber, int secondNumber);

Parameters:

firstNumber → first integer

secondNumber → second integer

Returns:

Sum of the two integers

📚 Learning Concepts Covered

Input/Output (printf, scanf)

Function prototypes

User-defined functions

Returning values from functions