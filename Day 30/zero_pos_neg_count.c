//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main(){
    int i,n,zc=0,pc=0,nc=0;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);

    int arr[n];

    for (i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
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
        if (arr[i]>0){
            pc++;
        }
        else if (arr[i]<0){
            nc++;
        }
        else{
            zc++;
        }
    }

    printf("\n\nThe number of zeroes: %d",zc);
    printf("\nThe number of positives: %d",pc);
    printf("\nThe number of negatives: %d",nc);

    return 0;
}