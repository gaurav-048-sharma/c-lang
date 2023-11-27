#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;

        case '/':
            if(num2 != 0) {
                printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;

        default:
            printf("Error! Invalid operator. Please use '+', '-', '*', or '/'.");
    }

    return 0;
}