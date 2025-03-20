// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int fs=arr[0],ss=-1;
    if(arr[0]<arr[1]){ss=arr[1];}
    for(int i=0;i<N;i++){
        if(arr[i]<fs){
            ss=fs;
            fs=arr[i];
        }
    }
    printf("%d",ss);
    return 0;
}