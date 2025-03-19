// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int L=0,R=N-1;
    while(L<R){
        if(arr[L]!=arr[R]){
            printf("NO");
            return 0;
        }
        L++;R--;
    }
    printf("YES");

    return 0;
}