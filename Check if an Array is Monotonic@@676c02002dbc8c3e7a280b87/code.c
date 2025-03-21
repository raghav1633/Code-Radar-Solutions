// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    //for decresing
    int inc=1,dec=1;
    for(int i=0;i<N-1;i++){
        if(arr[i]==arr[i+1])continue;
        if(!(arr[i]>arr[i+1])){
            dec=0;
            break;
        }
    }
    //for increasing
    for(int i=0;i<N-1;i++){
        if(arr[i]==arr[i+1])continue;
        if(!(arr[i+1]>arr[i])){
            inc=0;break;
        }
    }
    printf(inc==1||dec==1?"YES":"NO");

    return 0;
}