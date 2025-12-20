📌 Overview

This program performs matrix multiplication using the C programming language. It allows the user to:

Enter the dimensions and elements of two matrices

Validate whether multiplication is possible

Compute the product of the matrices

Display the resultant matrix

The program uses 2D arrays and nested loops, making it suitable for beginners learning arrays and matrix operations in C.

🧮 Matrix Multiplication Rule

If:

Matrix A has dimensions r × c

Matrix B has dimensions brows × bcolum

Then matrix multiplication is possible only if:

c == brows

The resultant matrix will have dimensions:

r × bcolum
🛠️ Features

Accepts user-defined matrix sizes (up to 50 × 50)

Validates matrix compatibility

Uses efficient nested loops for multiplication

Displays the final product matrix

🧑‍💻 Program Code
#include <stdio.h>
#define max 50


int main() {
    int sum = 0;
    int a[max][max], b[max][max], product[max][max];
    int r, c, brows, bcolum;
    int i, j, k;


    // Matrix A
    printf("enter the rows and columns of matrix a: ");
    scanf("%d %d", &r, &c);


    printf("enter the elements of matrix a:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    // Matrix B
    printf("enter the rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolum);


    if (brows != c) {
        printf("matrix does not match\n");
        return 0;
    }


    printf("enter the elements of matrix b:\n");
    for (i = 0; i < brows; i++) {
        for (j = 0; j < bcolum; j++) {
            scanf("%d", &b[i][j]);
        }
    }


    // Matrix multiplication
    for (i = 0; i < r; i++) {
        for (j = 0; j < bcolum; j++) {
            sum = 0;
            for (k = 0; k < c; k++) {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
        }
    }


    // Display result
    printf("Resultant matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < bcolum; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }


    return 0;
}
▶️ Sample Input
enter the rows and columns of matrix a: 2 3
enter the elements of matrix a:
1 2 3
4 5 6


enter the rows and columns of matrix b: 3 2
enter the elements of matrix b:
1 2
3 4
5 6
✅ Sample Output
Resultant matrix:
22 28
49 64
🎓 Learning Outcomes

Understanding 2D arrays in C

Applying nested loops

Learning matrix multiplication logic

Avoiding common errors like segmentation faults

📚 Suitable For

Engineering students

Beginners in C programming

Data Structures & Algorithms basics