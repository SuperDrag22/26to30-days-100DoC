//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main(){
    int i,n,sum=0;
    
    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);
    int arr[n];

    for (i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nThe array: ");
    for (i=0;i<n;i++){
        if (i==n-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d,",arr[i]);
        }
    }

    for (i=0;i<n;i++){
        sum += arr[i];
    }
    printf("\nsum: %d",sum);
}