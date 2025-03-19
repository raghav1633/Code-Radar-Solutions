// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    L=0;R=N-1;
    while(L<R){
        if(arr[L]!=arr[R]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");

    return 0;
}