// Your code here...
#include <stdio.h>
int main(){

    int N,tar;
    scanf("%d",&N);
    int arr[N];
     scanf("%d",&tar);
    for(int i=0;i<N;i++)scanf("%d ",&arr[i]);
    for(int i=0;i<N;i++){
        if(arr[i]==tar){
            printf("%d",i);
        }
    }
    printf("-1");
    return 0;
}