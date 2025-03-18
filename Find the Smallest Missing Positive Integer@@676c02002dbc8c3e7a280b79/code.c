// Your code here...
#include <stdio.h>
int finder(int arr[],int N;int n){
    if(n<0)return 1;
    for(int i=0;i<N;i++){
        if(arr[i]==n)return 1;
    }
    return 0;
}
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int sm=arr[i]
    for(int i=1;i<N;i++){
        if(arr[i]<sm){
            sm=arr[i];
        }
    }
    while(finder(arr;N;sm+1)){
        sm++;
    }
    printf("%d",sm);
    
    
}