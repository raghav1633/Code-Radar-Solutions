// Your code here...
#include <stdio.h>
int find(int arr[],int N,int n){
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
    int great=arr[0];
    for(int i=0;i<N;i++){
        if(great<arr[i])great=arr[i];
    }
    if(great<=0){printf("%d",1);return 0;}
    for(int i=1;i<=great+1;i++){
        if(!find(arr,N,i)){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}