//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main(){
    int i,n,evenc=0,oddc=0;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);

    int arr[n];
    for (i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array: ");
    for (i=0;i<n;i++){
        if (i==n-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d,",arr[i]);
        }
    }

    for (i=0;i<n;i++){
        if (i%2==0){
            evenc++;
        }
        else{
            oddc++;
        }
    }

    printf("\n\nNumber of even elements: %d",evenc);
    printf("\nNumber of odd elements: %d",oddc);
}