//Q52: Write a program to print the following pattern:
/*


*

*
*
*

*
*
*
*
*

*
*
*

*


*//*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main(){
    int i,j,k;

    for (i=1;i<=3;i++){
        for (j=1;j<=2*i-1;j++){
            printf("\n*");
        }
        printf("\n");
    }

    for (i=2;i>=1;i--){
        for (j=1;j<=2*i-1;j++){
            printf("\n*");
        }
        printf("\n");
    }
}