#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a string: ");
    scanf("%s", name);   // reads a word into char array

int n=strlen(name);
   printf("length:%d\n",n);

    // reverse logic
    for (int i = 0; i < n/2; i++) {
        char temp = name[i];
        name[i] = name[n - i - 1];//starting of the letter and last letter
        name[n - i - 1] = temp;
    }

    printf("Reversed string: %s", name);

    return 0;
}
