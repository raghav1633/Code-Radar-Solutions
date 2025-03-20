// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int counts[N];
    for(int i=0;i<N;i++){
        int count=1;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j])count++;
        }
        counts[i]=count;
    }
    int mx=0,ind=0;
    for(int i=0;i<N;i++){
        if(mx<counts[i]){
            mx=counts[i];
            ind=i;
        }
    }
    printf("%d",arr[ind]);
    return 0;
}