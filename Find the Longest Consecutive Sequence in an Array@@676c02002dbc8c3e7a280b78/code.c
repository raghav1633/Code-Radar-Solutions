// Your code here...
#include <stdio.h>
int finder(int arr[],int N,int n){
    for(int i=0;i<N;i++){
        if(arr[i]==n){
            return 1;
        }
    }
    return 0;
}
int main(){

    int N;
    scanf("%d",&N);
    int arr[N];
    int mx=0;
    for(int i=0;i<N;i++)scanf("%d ",&arr[i]);
    for(int i=0;i<N;i++){
        if(!finder(arr,N,arr[i]-1)){
            int cou=1;
            int cn=i;
            while(arr,N,finder(cn+1)){
                cn++;cou++;
            }
        }
        mx=mx>cn?mx:cn;
    }
    printf("%d",mx);

    return 0;
}