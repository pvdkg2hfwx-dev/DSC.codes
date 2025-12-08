#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r, c;

    // Input size of matrix
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtract matrices: C = A - B
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display Result
    printf("Resultant Matrix (A - B):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
