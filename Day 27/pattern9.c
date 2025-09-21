//Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main(){
    int i,j,k,rows=7;

    for (i=1;i<=(rows+1)/2;i++){
        for (k=3;k>=i;k--){
            printf(" ");
        }

        for (j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    for (i=(rows-1)/2;i>=1;i--){
        for (k=0;k<=((rows-1)/2)-i;k++){
            printf(" ");
        }

        for (j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}