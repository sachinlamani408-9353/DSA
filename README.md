# Power of a Number Using C (Without Built-in Function)

## 📌 Description
This C program calculates the **value of a number raised to the power of another number** using a **while loop**, without using any built-in power functions like `pow()`.

The first number (base) is of type `float`, and the second number (exponent) is of type `int`.

---

## ✅ Program Features
- Accepts two numbers from the user:
  - A **floating-point base**
  - An **integer exponent**
- Calculates power using **repeated multiplication**
- Displays the result clearly
- Uses:
  - `while` loop
  - `scanf()` and `printf()`

---

## 🧠 Program Logic
1. Read base value `x` and exponent `y`.
2. Initialize:
   - `power = 1`
   - `i = 1`
3. Multiply `power` with `x`, `y` number of times.
4. Print the result as:
x to the power y is power

cpp
Copy code

---

## 💻 Source Code
```c
// Two numbers are entered through the keyboard.
// Write a program to find the value of one number raised to the power of another.
#include <stdio.h>

int main() {
 float x, power;
 int y, i;

 printf("Enter two numbers: ");
 scanf("%f %d", &x, &y);

 power = i = 1;

 while (i <= y) {
     power = power * x;
     i++;
 }

 printf("%f to the power %d is %f\n", x, y, power);
 return 0;
}
▶️ How to Compile and Run
Step 1: Compile
bash
Copy code
gcc power.c -o power
Step 2: Run
bash
Copy code
./power
🧪 Sample Input & Output
Input:
yaml
Copy code
Enter two numbers: 2 5
Output:
vbnet
Copy code
2.000000 to the power 5 is 32.000000
📚 Concepts Used
Data Types (float, int)

While Loop

Repeated Multiplication

User Input / Output

