#include<stdio.h>
#include<string.h>
int main() {
    char name[50],department[50],university[50];
    int age, month, day, year;

    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your age: ");
    scanf("%d", &age);
    printf("Enter the day of your birthday: ");
    scanf("%d", &day);
    printf("Enter the month of your birthday: ");
    scanf("%d", &month);
    printf("Enter the year of your birthday: ");
    scanf("%d", &year);
    printf("enter your department: ");
    scanf("%s", department);
    printf("enter your university: ");
    scanf("%s", university);

    printf("\n\nyour nanme is : %s\n" , name); 
    printf("your age is : %d\n", age) ;
    printf("your DOB is : %d-%d-%d\n",day, month, year ) ;
    printf("your department is : %s\n", department);
    printf("your university is : %s\n", university);
    return 0;
}