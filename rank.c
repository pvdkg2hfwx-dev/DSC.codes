#include <stdio.h>

#define MAX 10

// Function to swap two rows of a matrix
void swapRows(float mat[MAX][MAX], int row1, int row2, int col) {
    for (int i = 0; i < col; i++) {
        float temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}

int main() {
    int r, c;
    float mat[MAX][MAX];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%f", &mat[i][j]);
        }
    }

    int rank = c; // Start rank as number of columns

    for (int row = 0; row < rank; row++) {

        // If diagonal element is not zero
        if (mat[row][row] != 0) {

            for (int i = 0; i < r; i++) {
                if (i != row) {
                    float ratio = mat[i][row] / mat[row][row];
                    for (int j = 0; j < rank; j++) {
                        mat[i][j] -= ratio * mat[row][j];
                    }
                }
            }

        } else {
            // Find non-zero element below
            int reduce = 1;
            for (int i = row + 1; i < r; i++) {
                if (mat[i][row] != 0) {
                    swapRows(mat, row, i, rank);
                    reduce = 0;
                    break;
                }
            }

            if (reduce) {
                rank--;

                // Copy last column to this column
                for (int i = 0; i < r; i++) {
                    mat[i][row] = mat[i][rank];
                }
            }

            row--;
        }
    }

    printf("\nRank of the matrix = %d\n", rank);

    return 0;
}
