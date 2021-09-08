#include<stdio.h>
#include<stdlib.h>

void rotateLeft(int arr[], int r, int n){
    int t;
    for(int i = 0;i<r;i++){
        t = arr[0];
        for(int j=0;j<n;j++){
            arr[j] += arr[j+1];
            arr[j+1] = arr[j] - arr[j+1];
            arr[j] -= arr[j+1];
        }
        arr[n-1] = t;
    }
    printf("\nLeft Rotated Array is:\t");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}

void rotateRight(int arr[], int r, int n){
    int t;
    for(int i = 0;i<r;i++){
        t = arr[0];
        for(int j=0;j<n;j++){
            arr[j] += arr[j+1];
            arr[j+1] = arr[j] - arr[j+1];
            arr[j] -= arr[j+1];
        }
        arr[n-1] = t;
    }
    printf("\nRight Rotated Array is:\t");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}


int main()
{
    int *arr;
    int i,n,r,t;
    printf("Enter No. Of Elements:\t");
    scanf("%d",&n);
    printf("Total No. Of Elements:\t%d",n);
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Not Allocated Memory!! Get the hell out of here!!");
        return 0;
    }
    else{
        printf("\nEnter Elements one by one\n");
        for(i = 0;i < n;i++){
            scanf("%d",&arr[i]);
        }
        printf("The Array is:\t");
        for(i = 0;i < n;i++){
            printf("%d",arr[i]);
        }
        printf("\nEnter No. Of Rotations:\t");
        scanf("%d",&r);
        rotateLeft(arr, r, n);
        rotateRight(arr, r, n);
        free(arr);
    }
    return 0;
}