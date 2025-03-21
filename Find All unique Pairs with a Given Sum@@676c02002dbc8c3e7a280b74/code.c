// Your code here...
#include <stdio.h>
int finder(int arr[],int N,int n){
    for(int i=0;i<N;i++)if(arr[i]==n)return 1;
    return 0;
}
int main(){
    int N;scanf("%d",&N);int arr[N];for(int i=0;i<N;i++)scanf("%d",&arr[i]);int tar;scanf("%d",&tar);
    int vis[N];
    for(int i=0;i<N;i++)vis[i]=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]+arr[j]==tar){
                if(!(vis[arr[i]]&&vis[arr[j]])){
                    vis[i]=1;vis[j]=1;
                    printf("%d %d\n",arr[i],arr[j]);
                }
            }
        }
    }

    return 0;
}