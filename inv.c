#include <stdio.h>

int main() {
    float a, b, c, d;
    float det;

    // Input matrix
    printf("Enter elements of 2x2 matrix:\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
    printf("d = "); scanf("%f", &d);

    // Calculate determinant
    det = a * d - b * c;

    // Check if inverse exists
    if(det == 0) {
        printf("Matrix has NO inverse (determinant = 0).\n");
        return 0;
    }

    printf("\nInverse of the matrix is:\n");

    printf("%f  %f\n",  d/det,  -b/det);
    printf("%f  %f\n", -c/det,   a/det);

    return 0;
}
