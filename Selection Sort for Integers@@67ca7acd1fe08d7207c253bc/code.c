// Your code here...
#include <stdio.h>
int printArray(int arr[],int n){
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
}
int selectionSort(int arr[],int n){
    int sm;
    for(int i=0;i<n;i++){
        sm=arr[i];
        for(int j=i+1;j<n;j++){
            if(sm>arr[j]){
                sm=arr[j];
            }
        }
        arr[i]=sm;
    }
}