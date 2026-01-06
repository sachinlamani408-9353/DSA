# Bubble Sort in C

This is a simple implementation of the **Bubble Sort** algorithm in C. Bubble Sort is a basic sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the array is sorted.

---

## Features

- Sorts an array of integers in **ascending order**.
- Takes input from the user for the number of elements and the elements themselves.
- Uses a simple **nested loop** approach for sorting.

---

## How Bubble Sort Works

1. Compare each pair of adjacent elements.
2. Swap them if the first element is greater than the second.
3. Repeat for all elements in the array.
4. Continue the process for `n-1` passes until the array is sorted.

**Example:**

Input:  
5 1 4 2 8

makefile
Copy code

Output:  
1 2 4 5 8

cpp
Copy code

---

## Program Code

```c
#include <stdio.h>

int main() {
    int arr[100], n, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
How to Run
Save the code in a file, for example: bubble_sort.c.

Open a terminal and navigate to the directory containing the file.

Compile the program:

bash
Copy code
gcc bubble_sort.c -o bubble_sort
Run the executable:

bash
Copy code
./bubble_sort
Enter the number of elements and the array elements when prompted.

Time Complexity
Best Case: O(n) → if already sorted (with optimization)

Worst Case: O(n²)

Average Case: O(n²)

Space Complexity: O(1)