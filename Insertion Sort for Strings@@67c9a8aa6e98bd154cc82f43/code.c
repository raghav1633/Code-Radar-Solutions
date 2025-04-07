#include <stdio.h>
#include <string.h>
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++)printf("%s\n",arr[i]);
}
void insertionSort(char arr[][100],int n){
    char temp[100];int k;
    for(int i=0;i<n-1;i++){
        k=i;
        for(int j=i+1;j<n;j++){
            if((strcmp(arr[k],arr[j]))>0)k=j;
        }
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[k]);
        strcpy(arr[k],temp);
    }
}