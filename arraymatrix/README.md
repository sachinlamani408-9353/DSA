Matrix Input and Display Program in C

This program allows the user to input a matrix of any size (rows × columns) and displays it in matrix format. Instead of using a 2D array, the matrix is stored in a 1D array and accessed using index mapping.

📌 Features

Takes user input for number of rows and columns

Dynamically calculates total matrix size

Stores matrix elements in a 1D array

Uses index mapping:

arr[i * c + j]


Prints the matrix in proper row–column format

📂 Code Overview

The matrix is represented using a single-dimensional array:

int size = r * c;
int arr[size];  // 1D array representing matrix


Element access formula:

Index = i * c + j


Where:

i → current row

j → current column

c → total number of columns

🛠 How the Program Works

The user enters the number of rows (r) and columns (c).

The program calculates total elements (size = r * c).

The user enters all matrix elements.

The array is printed in matrix form.

📌 Example Input/Output
Input
Enter number of rows:
2
Enter number of columns:
3
Enter 6 elements:
1 2 3 4 5 6

Output
Matrix:
1 2 3
4 5 6

📜 Complete Code
#include <stdio.h>

int main() {
    int r, c;
    
    printf("Enter number of rows:\n ");
    scanf("%d", &r);

    printf("Enter number of columns:\n ");
    scanf("%d", &c);

    int size = r * c;
    int arr[size];   // 1D array representing matrix

    // Input matrix elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i * c + j]);
        }
    }

    // Printing matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i * c + j]);
        }
        printf("\n");
    }

    return 0;
}

📘 Notes

This program uses Variable Length Arrays (VLA), which are supported in C99 and later.

It demonstrates how to represent a 2D matrix using a 1D array, which is useful in memory-efficient applications.