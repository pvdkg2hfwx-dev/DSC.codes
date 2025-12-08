#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
float divi(int a, int b) {
    return (float)a / b;
}
int main() {
    int x, y, choice;
 printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
  printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
 switch(choice) {
        case 1: printf("Result = %d\n", add(x,y)); break;
        case 2: printf("Result = %d\n", sub(x,y)); break;
        case 3: printf("Result = %d\n", mul(x,y)); break;
        case 4: printf("Result = %.2f\n", divi(x,y)); break;
        default: printf("Invalid choice\n");
    }
 return 0;
}