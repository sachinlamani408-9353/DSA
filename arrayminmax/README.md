# Find Maximum and Minimum in an Array (C Program)

## 📌 Description
This C program reads a list of integers from the user, stores them in an array, and finds the **maximum** and **minimum** elements in the array.

---

## 🛠️ Features
- Uses a one-dimensional array
- Takes user input for array size and elements
- Finds maximum and minimum values efficiently
- Simple and beginner-friendly logic

---

## 📂 Program Code
```c
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = arr[0];
    min = arr[0];

    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Display results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
▶️ How to Run the Program
Save the code in a file named max_min_array.c

Compile the program:

bash
Copy code
gcc max_min_array.c -o max_min_array
Run the executable:

bash
Copy code
./max_min_array
🧪 Sample Input
yaml
Copy code
Enter number of elements: 5
Enter 5 elements:
10 25 5 40 15
✅ Sample Output
java
Copy code
Maximum element = 40
Minimum element = 5
🧠 Explanation
The first array element is assumed as both maximum and minimum.

The program compares each element with current max and min.

Updates values when a larger or smaller element is found.

🎯 Applications
Data analysis

Searching algorithms

Learning arrays in C

Foundation for sorting algorithms

📚 Requirements
C Compiler (GCC recommended)

Basic knowledge of C programming