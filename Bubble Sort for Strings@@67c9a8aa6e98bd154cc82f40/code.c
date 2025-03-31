// Your code here...
#include <stdio.h>
#include <string.h>
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++)printf("%s\n",arr[i]);
}
void bubbleSort(char arr[][100],int n){
    char temp[100];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])>0){
               strcpy(temp,arr[i]);
               strcpy(arr[i],arr[j]);
               strcpy(arr[j],temp); 
            }
        }
    }
}