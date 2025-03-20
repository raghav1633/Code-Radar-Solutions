// Your code here...
#include <stdio.h>
#include <stdlib.h>
int calc(int n){
    int sm=0;
    while(n!=0){
        sm+=n%10;n/=10;
    }
    return sm;

}
int main(){
int N;scanf("%d",&N);
int arr[N];
for(int i=0;i<N;i++)scanf("%d",&arr[i]);
for(int i=0;i<N;i++){printf("%d ",calc(abs(arr[i])));}

    return 0;
}