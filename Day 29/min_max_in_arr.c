//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main(){
    int i,n;

    printf("Enter the number of elements you want in your array: ");
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

    int min=arr[0],max=arr[0];
    for (i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }

        if (arr[i]<min){
            min = arr[i];
        }
    }

    printf("\nThe largest value is: %d",max);
    printf("\nThe smallest value is: %d",min);
}