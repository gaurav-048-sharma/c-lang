#include<stdio.h>
#include<math.h>
//function prototype
int rectangle(float a , float b);
void printhello(int count);

int main() {
    //function call
    // int n;
    // printf("enter a number: ");
    // scanf("%d", &n);
    // table(n); //argument
    // return 0;
    // int n=78;
    // printf("%d", (int)pow(n,2));
    printhello(10);
    return 0;
}
//function definition
int sum(int r ,int c) {
    return r+c;
}
int rectangle(float a , float b) {
    return 2*(a+b);
}
void printhello(int count) {
    if(count == 0) {
        return ;
    }
    printf("hello\n");
    printhello(count-1);
}