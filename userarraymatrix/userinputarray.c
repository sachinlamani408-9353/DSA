#include <stdio.h>
#define max 50

int main() {
    int sum = 0;
    int a[max][max], b[max][max], product[max][max];
    int r, c, brows, bcolum;
   int i ,j,k;
    // Matrix A
    printf("enter the rows and columns of matrix a: ");
    scanf("%d %d", &r, &c);

    printf("enter the elements of matrix a:\n");
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
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
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < bcolum; j++) {
            sum = 0;
            for ( k = 0; k < c; k++) {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum=0;
        }
    }
   printf("Resultant matrix:\n");
for (int i = 0; i < r; i++) {
    for (int j = 0; j < bcolum; j++) {
        printf("%d ", product[i][j]);
    }
    printf("\n");
}

    return 0;
}
