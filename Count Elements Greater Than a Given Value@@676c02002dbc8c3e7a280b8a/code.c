// Your code here...
#include <stdio.h>
void main(){
int N,K;
scanf("%d %d",&N,&K);
int arr[N];
for(int i=0;i<N;i++)scanf("%d",&arr[i]);
int count=0;
for(int i=0;i<N;i++)if(arr[i]>K)count++;
printf("%d",count);
}