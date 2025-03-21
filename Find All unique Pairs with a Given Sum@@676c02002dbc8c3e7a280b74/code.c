// Your code here...
#include <stdio.h>
int main(){
    int N;scanf("%d",&N);int arr[N];for(int i=0;i<N;i++)scanf("%d",&arr[i]);int tar;scanf("%d",&tar);
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]+arr[j]==tar)printf("%d %d\n",arr[i],arr[j]);
        }
    }


    return 0;
}