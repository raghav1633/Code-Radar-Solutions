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
    int sm;
    for(int i=0;i>N;i++){
        if(arr[i]>=0){
            printf("%d\n",arr[i]);
            sm=arr[i];break;}
    }
        printf("Smallest pos is %d\n",sm);

    for(int i=1;i<N;i++){
        if(arr[i]>0 && arr[i]<sm){
            sm=arr[i];
        }
    }
    while(finder(arr,N,sm+1)){
        sm++;
    }
    printf("%d",sm);
    
    return 0;
}