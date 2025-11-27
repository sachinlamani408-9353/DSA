Pass by Reference Calculator (C Program)

This project demonstrates how to perform arithmetic operations in C using pass-by-reference (pointers).
The program allows the user to input two numbers and choose an operation such as addition, subtraction, multiplication, or division.
Features

Uses functions with pointer parameters (pass by reference)

Supports basic arithmetic operations:

Addition

Subtraction

Multiplication

Division (with zero-division handling)

Displays result with 2-decimal precision
main.c

Contains:

Function definitions for addvalue, subvalue, mulvalue, and divvalue

Menu-driven program to perform selected arithmetic operation

Demonstrates how pointers are used to return results

How It Works

The user enters two numbers (a and b).

The user selects an operation from the menu:

1 → Addition
2 → Subtraction
3 → Multiplication
4 → Division


The program calls the respective function and passes variables using pointers.

The function updates the result variable using dereferencing.

The final result is printed on the screen.