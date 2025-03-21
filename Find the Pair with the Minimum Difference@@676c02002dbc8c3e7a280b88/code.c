// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    
    int n1=arr[0],n2=arr[1],diff=abs(arr[1]-arr[0]);
    for(int i=1;i<N;i++){
        for(int j=i+1;j<N;j++){
            int cd=abs(arr[i]-arr[j]);
            if(cd<diff){
                n1=arr[i];n2=arr[j];diff=cd;
            }
        }
    }
    printf("%d %d",arr[0]>arr[1]?arr[1],arr[0]:arr[0],arr[1]);

    return 0;
}