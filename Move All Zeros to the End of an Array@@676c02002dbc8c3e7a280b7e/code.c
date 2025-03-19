// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int R=N-1
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            while(arr[R]==0){
                R--;
            }
            int temp=arr[R];arr[R]=arr[i];arr[i]=temp;

        }

    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}