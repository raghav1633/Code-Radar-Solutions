// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    for(int i=0;i<N-1;i++){
        if(!abs(arr[i]-arr[i+1])==1 || !abs(arr[i]-arr[i+1])==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}