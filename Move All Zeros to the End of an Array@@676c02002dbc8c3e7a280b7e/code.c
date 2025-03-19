// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int R=N-1;
    for(int i=0;i<N;i++){
        if(arr[i]==0){
            for(int j=i+1;j<N;j++){
                if(arr[j]!=0){
                int temp=arr[j];
                arr[j]=arr[i];arr[i]=temp;
                break;}
            }
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}