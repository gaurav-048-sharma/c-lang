// #include<stdio.h>
// int main() {
//     float num1, num2, sum;
//     printf("Enter the first number: ");
//     scanf("%f", &num1);
//     printf("enter the second number: ");
//     scanf("%f", &num2);
//     sum = num1+ num2 ;
//     printf("the addition of two complex numbers is: %f", sum);
//     return 0;
// }
#include<stdio.h>
#include<complex.h>
int main(){

    double complex c1 =5.0 + 3.0*I;
    double complex c2=7.0 -4.0*I;
    printf("\naddition of complex number");
    printf("\nvalues of complex number c1: c1= %f + %fi", creal(c1), cimag(c1) );
    printf("\n values of complex number c2: c2 =%f - %fi\n", creal(c2), cimag(c2));
    double complex sum = c1+c2;
    printf("\nsum of two complex numbers : %f + %fi",creal(sum), cimag(sum));
}
