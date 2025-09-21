//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int i,j,n;
    bool prime;
    printf("Enter the a limit to print primes: ");
    scanf("%d",&n);

    printf("%d ",2);         //since 2 is always prime
    for (i=3;i<=n;i++){
        for (j=2;j<i;j++){
            prime = true;
            if (i%j==0){
                prime = false;
                break;
            }
        }
        if (prime){
            printf("%d ",i);
        }
    }
}