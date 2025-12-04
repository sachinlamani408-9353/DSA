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
    printf("Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i * c + j]);
        }
        printf("\n");
    }

    return 0;
}
