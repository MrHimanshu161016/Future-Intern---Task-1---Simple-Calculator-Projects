#include <stdio.h>

int main() {
    char symbol;
    float x, y, Z;

    printf("Simple Calculator\n");
    printf("Choose an symbol (+, -, *, /): ");
    scanf(" %c", &symbol);

    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter second number: ");
    scanf("%f", &y);

    switch (symbol) {
        case '+':
            Z = x + y;
            printf("%.0f + %.0f = %.0f\n", x, y, Z);
            break;
        case '-':
            Z = x - y;
            printf("%.0f - %.0f = %.0f\n", x, y, Z);
            break;
        case '*':
            Z = x * y;
            printf("%.0f * %.0f = %.0f\n", x, y, Z);
            break;
        case '/':
            if (y != 0) {
                Z = x / y;
                printf("%.0f / %.0f = %.2f\n", x, y, Z);
            } 
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid symbol. Please use +, -, *, or /.\n");
    }

    return 0;
}
