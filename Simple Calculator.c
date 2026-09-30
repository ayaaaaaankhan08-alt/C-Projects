#include<stdio.h>
int main() {
    float val1, val2;
    char operator;
    printf("Enter two values one by one: ");
    scanf("%f %f", &val1, &val2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            printf("Result: %.2f\n", val1 + val2);
            break;
        case '-':
            printf("Result: %.2f\n", val1 - val2);
            break;
        case '*':
            printf("Result: %.2f\n", val1 * val2);
            break;
        case '/':
            if (val2 != 0) {
                printf("Result: %.2f\n", val1 / val2);
            } 
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
}
