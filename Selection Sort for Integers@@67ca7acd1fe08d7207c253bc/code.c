// Your code here...
#include <stdio.h>
int printArray(int arr[],int n){
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
}
int selectionSort(int arr[],int n){
    int sm;int temp;int k;
    for(int i=0;i<n-1;i++){
        sm=arr[i];k=i;
        for(int j=i+1;j<n;j++){
            if(sm>arr[j]){
                sm=arr[j];
                k=j;
            }
        }
        temp=arr[i];
        arr[i]=sm;
        arr[k]=temp;
        
    }
}