#include<stdio.h>
int main() {
    int n, x, y, a,b, sum, average;
    printf("enter the 3 dgit value: ");
    scanf("%d", &n);
    x = n/100;
    y = n%100;
    a = y/10;
    b = y%10;
    sum = x+a+b;
    average = sum/3;
    printf("sum is : %d\n", sum);
    printf("average is : %d", average);
}