Bubble Sort in C

This repository contains a simple Bubble Sort implementation in C. The program reads an array from the user, sorts it in ascending order using the Bubble Sort algorithm, and prints the sorted array.

📌 What is Bubble Sort?

Bubble Sort is a basic sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order. After each pass, the largest element moves to the end of the array, similar to a bubble rising to the surface.

🧠 Algorithm Steps

Read the number of elements n

Read n array elements

Repeat the following for n-1 passes:

Compare adjacent elements

Swap if the left element is greater than the right

Print the sorted array

💻 Source Code
#include <stdio.h>
int main(){
    int key, n, arr[100], i, temp;
    
    printf("enter the array size:");
    scanf("%d", &n);
    
    printf("entere the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("sorted array:");
    for(i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}
▶️ Sample Input
enter the array size: 5
entere the array elements: 5 2 4 1 3
▶️ Sample Output
sorted array: 1 2 3 4 5
⏱️ Time and Space Complexity
Case	Complexity
Best Case	O(n)
Average Case	O(n²)
Worst Case	O(n²)

Space Complexity: O(1)

Sorting Type: In-place, Stable

✅ Advantages

Simple and easy to understand

Useful for learning sorting concepts

❌ Disadvantages

Inefficient for large datasets

High time complexity

🏁 Conclusion

Bubble Sort is mainly used for educational purposes. While not suitable for large-scale applications, it is an excellent starting point for understanding sorting algorithms.