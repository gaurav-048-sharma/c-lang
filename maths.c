#include<stdio.h>
int main() {
    float a, b, rectangle, triangle, circle, square;
    printf("enter the two nuber");
    scanf("%f %f", &a, &b);
    rectangle = 2 * (a + b);
    triangle = a * b / 2;
    circle = 3.14159 * a * a;
    square = a * a;
    printf("\nThe area of rectangle is: %f", rectangle);
    printf("\nThe area of triangle is: %f", triangle);
    printf("\nThe area of circle is: %f", circle);
    printf("\nThe area of square is: %f", square);
    return 0;

}  