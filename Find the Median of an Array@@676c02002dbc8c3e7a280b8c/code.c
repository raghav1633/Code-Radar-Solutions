// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    printf(N%2==0?(arr[N/2-1]+arr[N/2])/2:arr[N/2]);
    return 0;
}