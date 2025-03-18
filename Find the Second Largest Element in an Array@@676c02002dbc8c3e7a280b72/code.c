#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
        if(N<2)return -1;
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int fg,sg;
    if(arr[0]>arr[1]){
        fg=arr[0];
    sg=arr[1];}
    else{fg=arr[1];sg=arr[0];}

    for(int i=2;i<N;i++){
        if(arr[i]>fg){
            sg=fg;
            fg=arr[i];
        }
    }
    if(sg==fg){printf("%d",-1);}
    else{printf("%d",sg);}
    return 0;
}