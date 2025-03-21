// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    //finding the first even number
    int gr=-1;int ind=0;
    for(int i=0;i<N;i++)if(arr[i]%2==0){gr=arr[i];ind=i;break;}
    for(ind;ind<N;ind++)if(arr[i]%2==0)gr=gr>arr[i]?gr:arr[i];
    printf("%d",gr);
    return 0;
}