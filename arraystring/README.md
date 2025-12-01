String Reverse Program in C

This program reads a string from the user, prints its length, and then reverses it using a simple swapping logic.

📌 Features

Reads a string using scanf()

Calculates length using strlen()

Reverses the string using a loop

Displays the reversed string

📂 Program Code
#include <stdio.h>
#include <string.h>


int main() {
    char name[100];


    printf("Enter a string: ");
    scanf("%s", name);   // reads a word into char array


    int n = strlen(name);
    printf("length:%d\n", n);


    // reverse logic
    for (int i = 0; i < n/2; i++) {
        char temp = name[i];
        name[i] = name[n - i - 1]; // starting of the letter and last letter
        name[n - i - 1] = temp;
    }


    printf("Reversed string: %s", name);


    return 0;
}
🧠 Explanation
🔹 strlen(name)

Finds total characters in the string.

🔹 Reversing Logic

The loop runs until half of the string (n/2).

Swap first and last characters

Swap second and second-last

Continue until the middle is reached

This efficiently reverses the string.