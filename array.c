#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void) {
    int arr[MAX], rev[MAX];
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        fprintf(stderr, "Invalid size\n");
        return EXIT_FAILURE;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse and save in rev[]
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }

    // Display original array
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display reversed array
    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    printf("\n");

    return EXIT_SUCCESS;
}
