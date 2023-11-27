#include<stdio.h>
int main() {
    int n,a,b,c,d,sum;
    printf("enter the 3 digit number ");
    scanf("%d", &n);
    a = n/100;
    b= n%100;
    c=b/10;
    d=b%10;
    sum=(a+c+d);
    printf("%d", sum);
    return 0;
}