#include <stdio.h>
#include <stdlib.h>

// Function Prototype (Forward Declaration)
int add_numbers(int a, int b);

int main(void) {
    int num1, num2, result;

    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    // Function Call
    result = add_numbers(num1, num2);

    printf("Result: %d + %d = %d\n", num1, num2, result);

    return EXIT_SUCCESS;
}

// Function Definition
// Adds two integers and returns the sum
int add_numbers(int a, int b) {
    return a + b;
}
