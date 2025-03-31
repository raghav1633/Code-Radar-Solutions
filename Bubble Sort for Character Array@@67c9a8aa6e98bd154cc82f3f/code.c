// Your code here...
#include <stdio.h>

void bubbleSort(char arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                char temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}
