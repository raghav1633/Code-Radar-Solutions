// Your code here...
#include <stdio.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    if(k>n-1)return -1;
    bubbleSort(arr,n);
  return arr[k];
}
