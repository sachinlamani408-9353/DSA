# Number Classification Program in C

## 📌 Overview
This C program reads a list of integers from the user and classifies them into:
- Positive numbers
- Negative numbers
- Even numbers
- Odd numbers

It follows industry-level coding practices such as input validation, meaningful variable naming, and clear program structure.

---

## 🛠️ Features
- Accepts up to **100 integers**
- Validates user input to prevent invalid or unsafe values
- Counts:
  - Positive integers
  - Negative integers
  - Even integers
  - Odd integers
- Displays results in a clear and structured format

---

## 📂 File Structure
.
├── main.c # Source code
└── README.md # Project documentation

pgsql
Copy code

---

## 🧾 Program Logic
1. Define the maximum array size using a macro.
2. Read the number of elements from the user.
3. Validate input to ensure it is within allowed limits.
4. Read array elements.
5. Iterate through the array to classify numbers.
6. Display the count of each category.

---

## 💻 Source Code
```c
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int arr[MAX_SIZE];
    int n = 0;
    int positiveCount = 0, negativeCount = 0;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input detected!\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\n--- Result Summary ---\n");
    printf("Positive numbers : %d\n", positiveCount);
    printf("Negative numbers : %d\n", negativeCount);
    printf("Even numbers     : %d\n", evenCount);
    printf("Odd numbers      : %d\n", oddCount);

    return 0;
}
▶️ How to Compile and Run
Compile
bash
Copy code
gcc main.c -o number_classification
Run
bash
Copy code
./number_classification
🧪 Sample Input
yaml
Copy code
Enter the number of elements (1 to 100): 5
Enter 5 elements:
-2 3 4 7 0
📊 Sample Output
yaml
Copy code
--- Result Summary ---
Positive numbers : 3
Negative numbers : 1
Even numbers     : 2
Odd numbers      : 3
🚀 Possible Enhancements
Use functions for better modularity

Store results in a structure

Read input from a file

Add unit testing

