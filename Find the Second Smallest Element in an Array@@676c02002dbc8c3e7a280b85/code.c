// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);int arr[N];
    if(N<2){
        printf("%d",-1);
        return 0;
    }
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int fs=arr[0],ss=arr[1];
    if(arr[0]>arr[1]){fs=arr[1];ss=arr[0];}
    for(int i=2;i<N;i++){
        if(arr[i]<fs){
            ss=fs;
            fs=arr[i];
        }
    }
    if(fs==ss){printf("%d",-1);return 0;}
    printf("%d",ss);
    return 0;
}