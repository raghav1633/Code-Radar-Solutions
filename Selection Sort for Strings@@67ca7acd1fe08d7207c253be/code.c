#include <stdio.h>
#include <string.h>
void selectionSort(char arr[][100],int n){
    int temp,k;
    for(int i=0;i<n-1;i++){
        k=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])>0)k=j;
        }
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[k]);
        strcpy(arr[k],temp);
    }
}