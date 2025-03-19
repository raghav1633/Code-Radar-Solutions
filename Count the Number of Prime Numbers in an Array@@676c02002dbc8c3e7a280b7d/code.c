// Your code here...
#include <stdio.h>
int primeChecker(int n){
    for(int i=2;i<(n/2)+1;i++){
        if(n%i==0)return 0;
    }
    return 1;

}
int main(){
    int N;
    scanf("%d",&N);
    int count=0;
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    for(int i=0;i<N;i++){
        if(primeChecker(arr[i]))count++;
    }
    printf("%d",count);

    return 0;
}