// Your code here...
#include <stdio.h>
int main(){
    int N;scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int counts[N];
    int vis[N];
    for(int i=0;i<N;i++)vis[i]=0;
    int mx=0;
    int elem=arr[0];
    for(int i=0;i<N;i++){
        if(vis[i])continue;
        vis[i]=1;
        int count=0;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j])count++;
        }
        if(count>mx){
            mx=count;
            elem=arr[i];
        }
        
    }
    printf("%d",elem);


    return 0;
}