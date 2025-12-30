#include <stdio.h>

int main() {
    int arr[100];
    int n, key,found = 0;

    // array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // user input
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // search for elements
    printf("Enter element to search: ");
    scanf("%d", &key);

    // search fuction
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
