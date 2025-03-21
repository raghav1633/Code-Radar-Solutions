// Your code here...
#include <stdio.h>
int main(){
    int N;scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int k;scanf("%d",&k);
    k=k%N;
    for(int i=(N-k);i<N;i++)printf("%d ",arr[i]);
    for(int i=0;i<N-k;i++)printf("%d ",arr[i]);
    return 0;
}