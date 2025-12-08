#include <stdio.h>

int main() {
    int mat[10][10];
    int n, trace = 0;

    // Input size (square matrix)
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate trace (sum of diagonal)
    for (int i = 0; i < n; i++) {
        trace += mat[i][i];
    }

    // Display result
    printf("Trace of the matrix = %d\n", trace);

    return 0;
}
