#include <stdio.h>

int main() {
    int rows, cols;
    char matrix[50][50];
    char target;
    int count = 0;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix elements
    printf("Enter the characters for the %d x %d matrix:\n", rows, cols);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf(" %c", &matrix[i][j]); // space before %c avoids newline issues
        }
    }

    // Character to count
    printf("Enter the character to find: ");
    scanf(" %c", &target);

    // Count occurrences
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == target) {
                count++;
            }
        }
    }

    // Output result
    printf("The character '%c' appears %d times in the matrix.\n", target, count);

    return 0;
}