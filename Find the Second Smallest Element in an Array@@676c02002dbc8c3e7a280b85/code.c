// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int fg=arr[0],sg=-1;
    if(arr[0]>arr[1]){sg=arr[1];}
    for(int i=0;i<N;i++){
        if(arr[i]>fg){
            sg=fg;
            fg=arr[i];
        }
    }
    printf("%d",sg);
    return 0;
}