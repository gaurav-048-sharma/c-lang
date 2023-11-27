#include<stdio.h>
int main() {
    int p, t, simpleInterest;
    float r, compInterest;
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the time in years: ");
    scanf("%d", &t);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);
    
    simpleInterest = (p * t) * r / 100;
    compInterest = p + ((p * t) * r / 100);

    printf("\nThe Simple Interest is %d.", simpleInterest);
    printf("\nThe Compound Interest is %f", compInterest);
    return 0;
}