#include <stdio.h>

int main() {
    float x, y, a,b;
    printf("enter two number ");
    scanf("%f %f", &x, &y);
    a = x+y;
    b = x-y;
    float c = a/b;
    float d = a*b;
    printf("the result is %f\n", c);
    printf("the result is %f\n", d);
}