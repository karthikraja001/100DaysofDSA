#include<stdio.h>
#define MAX 10
int main(){
    int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
    for(int i=0;i<MAX;i++){
        printf("%d ",arr[i]);
    }
    int deleteAt = 3;
    printf("\n");
    for(int i=deleteAt-1;i<MAX;i++){
        arr[i] += arr[i+1];
        arr[i+1] = arr[i] - arr[i+1];
        arr[i] -= arr[i+1];
    }
    for(int i=0;i<MAX-1;i++){
        printf("%d ",arr[i]);
    }
}