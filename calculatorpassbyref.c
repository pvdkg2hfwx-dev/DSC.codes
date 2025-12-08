#include <stdio.h>
void add(int *a, int *b, int *res) {
    *res = *a + *b;
}
void sub(int *a, int *b, int *res) {
    *res = *a - *b;
}
void mul(int *a, int *b, int *res) {
    *res = (*a) * (*b);
}
void divi(int *a, int *b, float *res) {
    *res = (float)(*a) / (*b);
}
int main() {
    int x, y, choice, result;
    float fresult;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            add(&x, &y, &result);
            printf("Result = %d\n", result);
            break;
        case 2:
            sub(&x, &y, &result);
            printf("Result = %d\n", result);
            break;
        case 3:
            mul(&x, &y, &result);
            printf("Result = %d\n", result);
            break;
case 4:
            divi(&x, &y, &fresult);
            printf("Result = %.2f\n", fresult);
             break;
   default:
             printf("Invalid choice\n");
    }
 return 0;
}