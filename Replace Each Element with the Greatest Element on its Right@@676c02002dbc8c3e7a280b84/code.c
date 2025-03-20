// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    
    for(int i=0;i<N;i++){
        int gr=arr[i+1];
        for(int j=i+2;j<N;j++){
            gr=gr>arr[j]?gr:arr[j];
        }
        arr[i]=gr;
    }
    arr[N-1]=-1;
    for(int i=0;i<N;i++)printf("%d ",arr[i]);
    return 0;
}