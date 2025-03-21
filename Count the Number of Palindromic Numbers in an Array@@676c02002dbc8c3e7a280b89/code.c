// Your code here...
#include <stdio.h>
int pald(int n){
    int no=0,copy_n=n;
    while(copy_n!=0){
        no=no*10+copy_n%10;
        copy_n/=10;
    }
    return n==no?1:0;
}
int main(){
    int N;
    scanf("%d",&N);int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int count=0;
    for(int i=0;i<N;i++)
        if(pald(arr[i]))count++;
    printf("%d",count);

    return 0;
}