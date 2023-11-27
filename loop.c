// #include <stdio.h>

// int main() {
//    int n= 2, mul,i;
//    for(int i=1; i<=10; i++) {
//      mul = n*i;
//      printf("%d\n ", mul);
//    }

// }
// #include <stdio.h>

// int main() {
//     int i, j, rows;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         // Print spaces before the stars
//         for (j = 0; j <= rows - i; j++) {
//             printf("&");
//         }

//         // Print stars
//         for (j = 1; j <=  2*i-1; j++) {
//             printf("*");
//         }

//         // Move to the next line after each row
//         printf("\n");
//     }

//     return 0;
// }
#include<stdio.h>
int main() {
    int n=5 ;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<= n-i+1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}

