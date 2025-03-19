// Your code here...
#include <stdio.h>
int finder(int arr[],int N,int n){
    for(int i=0;i<N;i++){
        if(arr[i]==n)return 1;
    }
    return 0;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    for(int i=0;i<N;i++){
        if(!finder(arr,N,i)){
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",1);
    
    return 0;
}