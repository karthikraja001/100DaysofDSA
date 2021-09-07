/*  Array Insertion program 
    By Karthik Raja  
*/
#include <stdio.h>
#define MAX 10
int main()
{
    //Array Initialized
    int arr[MAX] = {10,20,30,40,60,70,80,90,100};

    //Printing Array
    for(int i=0;i<MAX;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    //Position For Insertion of new element
    int insertAt = 5;

    //Shift Elements in the Array
    for(int i=MAX-1;  i>=insertAt; i--){
        arr[i] = arr[i-1];
    }
    printf("\n");

    //Insert it!!
    arr[insertAt-1] = 50;

    //Print Now!!
    for(int i=0;i<MAX;i++){
        printf("%d\t",arr[i]);
    }
}
