Hierarchy of Operators in C — Example Program

This program demonstrates how operator precedence (hierarchy of operators) works in C by evaluating different arithmetic expressions.
The user enters multiple integer values, and the program performs calculations using various operators such as multiplication (*), addition (+), subtraction (-), and division (/).

📌 Program Description

The program:

Accepts 9 integer inputs from the user.

Performs four different arithmetic expressions:

z = a*b - c*d

j = (m+n) * (a+b)

i = 3*x*x + 2*x + 5

l = (a+b+c) / (d+e)

Prints the result of each expression.

📥 Input Format

You must enter nine integers in this order:

a b c d m n x e y


Example input:

2 3 4 5 6 7 8 9 10

💡 Concepts Demonstrated
1. Operator Precedence

C evaluates expressions based on a fixed operator priority:

* and / have higher precedence than + and -

Parentheses () change the order of evaluation

2. Arithmetic Expressions

Examples in the program:

Multiplication before subtraction

Grouping using parentheses

Polynomial expression: 3x² + 2x + 5

Division with grouped numerator & denominator