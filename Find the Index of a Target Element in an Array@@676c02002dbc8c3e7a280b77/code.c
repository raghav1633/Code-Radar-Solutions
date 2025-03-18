// Your code here...
#include <stdio.h>
int main(){

    int N,tar;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i])
    scanf("%d",&tar);
    for(int i=0;i<N;i++){
        if(arr[i]=tar){
            printf("%d",i);return 0;
        }
    }
    printf("-1");
    return 0;
}