Find Maximum Value in an Array (C Program)

This program demonstrates how to find the maximum value in an integer array using a simple linear search technique in the C programming language.

🚀 Program Overview

The program:

Initializes a static array of integers.

Calculates the size of the array using sizeof.

Traverses the array to find the maximum element.

Prints all array elements.

Displays the maximum value.

📂 Code Explanation
✔️ 1. Array Initialization
int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 };


A fixed array with 10 integer values.

✔️ 2. Finding the Array Size
int n = sizeof(arr) / sizeof(arr[0]);


sizeof(arr) → total memory occupied by the whole array

sizeof(arr[0]) → memory of one element

Dividing gives total number of elements.

✔️ 3. Initialize Maximum Value
int res = arr[0];


Assume the first element is the maximum.

✔️ 4. Loop to Find Maximum
for (int i = 0; i < n; i++) {
    if (res < arr[i])
        res = arr[i];
}


Compare each element with res.

If a bigger value is found, update res.

✔️ 5. Print Results

Print all elements and the final maximum value.

📤 Output Example
Array Elements: 23 12 45 20 90 89 95 32 65 19
The maximum value of the array is: 95

🧠 Key Concepts Used

Arrays in C

sizeof() operator

For loop

Conditional statements

Finding maximum value (linear search)