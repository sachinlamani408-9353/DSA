Linear Search in C
📌 Description

This program demonstrates the Linear Search algorithm in C programming.
Linear Search is a simple searching technique where each element of an array is checked sequentially until the desired element is found or the array ends.

🧠 How the Program Works

The user enters the number of elements.

The user inputs the array elements.

The user provides a key (element to search).

The program compares the key with each array element.

If found, it prints the position (1-based index).

If not found, it displays a message saying the element is not present.

🛠️ Algorithm (Steps)

Start

Read number of elements n

Read n array elements

Read the search key

Compare key with each element from index 0 to n-1

If match found → print position and stop

If no match → print "Element not found"

End

💻 Source Code
#include <stdio.h>

int main() {
    int arr[100];
    int n, key, found = 0;

    // array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // user input
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // search for element
    printf("Enter element to search: ");
    scanf("%d", &key);

    // linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}

▶️ Sample Input
Enter number of elements: 5
Enter elements:
10 20 30 40 50
Enter element to search: 30

✅ Sample Output
Element found at position 3

⏱️ Time and Space Complexity

Time Complexity: O(n)

Space Complexity: O(1)

📚 Applications

Small datasets

Unsorted arrays

Simple search operations

Learning basic searching algorithms