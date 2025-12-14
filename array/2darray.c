#include <stdio.h>

int main() {
    int rows, cols;

    // Ask user for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Taking input for the 2D array
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the 2D array
    printf("\nThe matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
