Polynomial Addition Using Linked List in C
📌 Description

This program performs addition of two polynomials using a singly linked list in C.
Each term of a polynomial is represented as a node containing a coefficient and an exponent.

The program dynamically creates nodes, stores polynomial terms, and adds two polynomials by comparing their exponents.

🧠 Data Structure Used

Singly Linked List

Each node contains:

coeff → coefficient of the term

exp → exponent of the term

next → pointer to the next node

struct Node {
    int coeff;
    int exp;
    struct Node *next;
};

📘 Polynomial Representation

Example polynomial:

5x³ + 4x² + 2x + 1


Linked list representation:

(5,3) → (4,2) → (2,1) → (1,0) → NULL

⚙️ Algorithm

Create two linked lists to store the input polynomials.

Traverse both lists simultaneously.

If exponents are equal, add coefficients and store the result.

If one exponent is greater, copy that term to the result list.

Continue until both lists are completely traversed.

Display the resulting polynomial.

🧩 Functions Used
Function	Purpose
createNode()	Creates a new node
insertEnd()	Inserts a node at the end of the list
display()	Displays the polynomial
addPolynomials()	Adds two polynomial linked lists
main()	Program execution starts here
▶️ Input (Hardcoded)

Polynomial 1:

5x^3 + 4x^2 + 2x + 1


Polynomial 2:

3x^3 + 1x^2 + 5

📤 Output
Polynomial 1: 5x^3 + 4x^2 + 2x^1 + 1x^0
Polynomial 2: 3x^3 + 1x^2 + 5x^0
Sum Polynomial: 8x^3 + 5x^2 + 2x^1 + 6x^0

💻 How to Compile and Run

Using GCC compiler:

gcc polynomial_addition.c -o polynomial
./polynomial
