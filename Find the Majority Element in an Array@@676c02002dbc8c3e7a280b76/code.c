// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int vis[N];
    for(int i=0;i<N;i++)vis[i]=0;
    for(int i=0;i<N;i++){
        int count=1;
        vis[i]=1;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j])count++;
        }
        if(count>N){printf("%d",arr[i]);return 0;}
    }
    return 0;
}