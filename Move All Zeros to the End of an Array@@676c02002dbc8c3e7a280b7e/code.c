// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
   
    int pos=0;
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
            pos++;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}