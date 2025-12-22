Description

This program demonstrates basic file handling in C.
It creates a text file named file1.txt, writes some text into it, and then closes the file safely.

🧠 Concept Used

File handling in C

FILE pointer

fopen()

fprintf()

fclose()

📂 Program Explanation

A file pointer fptr is declared.

The file file1.txt is opened in write mode ("w").

The text "Some text" is written into the file using fprintf().

The file is closed using fclose() to save changes.

🧾 Source Code
#include <stdio.h>

int main() {
  FILE *fptr;

  // Open a file in writing mode
  fptr = fopen("file1.txt", "w");

  // Write some text to the file
  fprintf(fptr, "Some text");

  // Close the file
  fclose(fptr);

  return 0;
}

▶️ How to Compile and Run
gcc file.c -o file
./file


After running the program, a file named file1.txt will be created in the same directory.

📄 Output

file1.txt

Some text

⚠️ Note

If file1.txt already exists, it will be overwritten.

Always check if fptr == NULL in real applications to handle file opening errors.

✅ Use Case

Logging data

Saving program output

Creating configuration files