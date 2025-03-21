// Your code here...
#include <stdio.h>
int main(){
    int N,K;
    scanf("%d %d",&N,&K);int arr[N];
    int count=0
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(K==arr[i])count++;
    }
    printf("%d",count);

    return 0;
}