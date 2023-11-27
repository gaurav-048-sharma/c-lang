#include<stdio.h>
#include<stdlib.h>
int main() {
    int num1, num2, res;
    char operator;

    printf("Enter the operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator)
    {
    case '+': res = num1+num2;
    printf("%d", res);
        break;
    
    case '-': res = num1-num2;
    printf("%d", res);
        break;
    
    case '*': res = num1*num2;
    printf("%d", res);
        break;

    case '/': res = num1/num2;
    printf("%d", res);
        break;    
    
    case '%': res = num1%num2;
    printf("%d", res);
    break;

    default: 
    printf("wrong operators");
        break;
    }
    
        return 0;
}
