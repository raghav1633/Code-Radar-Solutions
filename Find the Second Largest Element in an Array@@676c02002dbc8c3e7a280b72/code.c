#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    if(N<2)return -1;
    int fg,sg;
    if(arr[0]>arr[1]){
        fg=arr[0];
    sg=arr[1];}
    else if(arr[1]>arr[0]){fg=arr[1];sg=arr[0];}
    else{
        fg=arr[0];
    }
    for(int i=2;i<N;i++){
        if(arr[i]>fg){
            sg=fg;
            fg=arr[i];
        }
    }
    printf("%d",sg);
    return 0;
}